/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassamoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 14:03:27 by hassamoh          #+#    #+#             */
/*   Updated: 2026/01/08 15:42:30 by hassamoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

/*int ft_print_char(char c)
{
	return (write(1, &c, 1));
}*/
int	ft_print_hex(unsigned long n, char format)
{
	int		count;
	char	*digits;

	count = 0;
	if (format == 'x')
		digits = "0123456789abcdef";
	else
		digits = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_print_hex(n / 16, format);
	count += ft_print_char(digits[n % 16]);
	return (count);
}

/*int main(void)
{
	ft_print_hex(255, 'x');
	ft_print_hex(255, 'X');
	ft_print_hex(16, 'x');
	ft_print_char('\n');
	return (0);
}*/
