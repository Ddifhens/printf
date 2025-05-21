/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:39:02 by jormanue          #+#    #+#             */
/*   Updated: 2025/05/21 14:43:06 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long nb)
{
	int	c = 0;

	if (nb < 0)
	{
		c += (ft_putchar('-'));
		nb = -nb; 
	}
	if (nb > 9)
	{
		c += (ft_putnbr(nb / 10));
		c += (ft_putnbr(nb % 10));
	}
	else
		c += (ft_putchar(nb + '0'));
	return (c);
}
