/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassamoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 10:35:09 by hassamoh          #+#    #+#             */
/*   Updated: 2026/01/08 18:01:27 by hassamoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>

int	ft_handle_format(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_print_char(va_arg(args, int));
	else if (c == 's')
		count += ft_print_str(va_arg(args, char *));
	else if (c == 'p')
		count += ft_print_ptr(va_arg(args, unsigned long));
	else if (c == 'd' || c == 'i')
		count += ft_print_nbr(va_arg(args, int));
	else if (c == 'u')
		count += ft_print_unsigned(va_arg(args, unsigned int));
	else if (c == 'x' || c == 'X')
		count += ft_print_hex(va_arg(args, unsigned int), c);
	else if (c == '%')
		count += ft_print_char('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_handle_format(format[i], args);
		}
		else
			count += ft_print_char(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}

/*int main(void)
{
    int a = 42;
    char c = 'A';
    char *s = "Hello";
    void *p = &a;


    printf("===== ORIGINAL PRINTF =====\n");
    int pr1 = printf("c:%c s:%s p:%p d:%d i:%i u:%u x:%x X:%X %%\n", 
		c, s, p, a, a, a, a, a);
    printf("return = %d\n", pr1);


    printf("\n===== FT_PRINTF =====\n");
    int pr2 = ft_printf("c:%c s:%s p:%p d:%d i:%i u:%u x:%x X:%X %%\n", 
		c, s, p, a, a, a, a, a);
    ft_printf("return = %d\n", pr2);

    return (0);
}*/
