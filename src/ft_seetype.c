/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_seetype.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 19:17:21 by jormanue          #+#    #+#             */
/*   Updated: 2025/05/13 18:49:33 by jormanue         ###   ########.fr       */
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

int	ft_printstr(char *s)
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
	static int	c = 0;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		c += (ft_putchar('-'));
		nb *= -1;
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		c += (ft_putchar(nb + '0'));
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
		printed += ft_printstr(va_arg(param, char *));
	else if (*point == 'i')
		printed += ft_putnbr(va_arg(param, int));
	return (printed);
}
