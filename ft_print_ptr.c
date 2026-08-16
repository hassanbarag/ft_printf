/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassamoh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 16:51:30 by hassamoh          #+#    #+#             */
/*   Updated: 2026/01/08 18:11:38 by hassamoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_print_ptr(unsigned long ptr)
{
	int	count;

	if (!ptr)
		return (ft_print_str("(nil)"));
	count = 0;
	count += write(1, "0x", 2);
	if (ptr == 0)
		count += ft_print_char('0');
	else
		count += ft_print_hex(ptr, 'x');
	return (count);
}
