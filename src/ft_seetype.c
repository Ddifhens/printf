/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_seetype.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 19:17:21 by jormanue          #+#    #+#             */
/*   Updated: 2025/05/21 15:50:05 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_seetype(unsigned char *point, va_list param)
{
	int	printed;

	printed = 0;
	if (*point == 'c')
		printed += ft_putchar(va_arg(param, int));
	else if (*point == 's')
		printed += ft_printstr(va_arg(param, char *));
	else if (*point == 'p')
		printed += ft_printptr(va_arg(param, void *));
	else if (*point == 'i')
		printed += ft_putnbr(va_arg(param, int));
	else if (*point == 'x')
		printed += ft_puthex(va_arg(param, unsigned int), 0);
	else if (*point == 'X')
		printed += ft_puthex(va_arg(param, unsigned int), 1);
	else if (*point == '%')
	{
		printed += ft_putchar('%');
		point++;
	}
	return (printed);
}
