/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_seetype.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 19:17:21 by jormanue          #+#    #+#             */
/*   Updated: 2025/05/11 16:36:10 by jormanue         ###   ########.fr       */
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

int ft_printstr(char *s)
{
	int	c;
	c = 0;
	while (*s)
	{
		ft_putchar(*s);
		c++;
		s++;
	}
	return (c);
}

int	ft_putnbr(int nb)
{
	static int	c;

	c = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		c++;
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
		c++;
	}
	return (c);
}

int	ft_seetype(unsigned char *point, va_list param)
{
	int	printed;

	printed = 0;
	if (*point == 'c' || *point == '%')
		printed += ft_putchar(va_arg(param, int));
	else if (*point == 's')
		printed += ft_printstr(va_arg(param, char*));
	/*else if (*point == 'p')
		ft_nulllhex(point, param, count);
	else if (*point == 'd')
		ft_printdecimal(point, param, count);*/
	else if (*point == 'i')
		printed += ft_putnbr(va_arg(param, int));
	/*else if (*point == 'u')
		ft_printunsdec(point, param, count);
	else if (*point == 'x')
		ft_printhex(point,param,count, 0);
	else if (*point == 'X')
		ft_printhex(point, param, count, 1);*/
	return (printed); 
}

