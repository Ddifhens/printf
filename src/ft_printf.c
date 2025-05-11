/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:46:45 by jormanue          #+#    #+#             */
/*   Updated: 2025/05/11 16:30:49 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *s, ...)
{
	int				printed;
	unsigned char	*point;
	va_list			param;

	printed = 0;
	va_start(param, s);
	point = (unsigned char *)s;
	while (*point)
		{
			if (*point == '%')
			{
				point++;
				printed += ft_seetype(point, param);
			}
			else if (*point)
			{
				ft_putchar(*point);
				printed++;
			}
			point++;	
		}
	return (printed);
}
