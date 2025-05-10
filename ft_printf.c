/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:46:45 by jormanue          #+#    #+#             */
/*   Updated: 2025/05/10 15:36:04 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int				*count;
	int				i;
	unsigned char	*point;
	va_list			param;

	i = 0;
	count = &i;
	va_start(param, s);
	point = (unsigned char *)s;
	while (point)
		{
			if (*point == '%')
			{
				point++;
				ft_findtype(point, param, count);
			}
			else
				ft_putchar(*point);
			point ++;	
		}
	return (*count);
}
