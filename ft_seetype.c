/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_seetype.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 19:17:21 by jormanue          #+#    #+#             */
/*   Updated: 2025/05/10 16:35:15 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write (1, %c, 1);
}

void ft_printchar(unsigned char *point, va_list param, int *count)
{
	int	c;

	c = va_arg(param, int);
	ft_putchar(c);
	(*count)++;
	point++;
}

void ft_printstr(unsigned char *point, va_list param, int *count)
{
	char	*s;

	s = va_arg(param, char*);
	while (s)
	{
		ft_putchar(*s);
		count++;
		s++;
	}
	point += ft_strlen(s);
}

void	ft_putnbr(unsigned char *point, va_list param, int *count)
{

}
void	ft_seetype(unsigned char *point, va_list param, int *count)
{
	if (*point == 'c' || *point == '%')
		ft_printchar(point, param, count);
	else if (*point == 's')
		ft_printstr(point, param, count);
	else if (*point == 'p')
		ft_nulllhex(point, param, count);
	else if (*point == 'd')
		ft_printdecimal(point, param, count);
	else if (*point == 'i')
		ft_putnbr(point, param, count);
	else if (*point == 'u')
		ft_printunsdec(point, param, count);
	else if (*point == 'x')
		ft_printhex(point,param,count, 0);
	else if (*point == 'X')
		ft_printhex(point, param, count, 1);
}

