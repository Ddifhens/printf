/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 13:08:03 by jormanue          #+#    #+#             */
/*   Updated: 2025/06/03 18:08:42 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	char	*c;
	int	*i;
	unsigned char	*p;
	char	a;
	int	b;
	unsigned char	d;

	a = 'b';
	b = 12356;
	d = 150;
	c= &a;
	i = &b;
	p = &d;
		
	printf("NULL for %%p:\n");

	int k = printf("Og -> %p,", NULL);
	printf("%i\n", k);
	k = ft_printf("ft -> %p,", NULL);
	printf("%i\n", k);


	printf("sending NULL:\n");
	k = printf(NULL);
	printf(", %i\n", k);
	k = ft_printf(NULL);
	printf(", %i\n", k);

	printf("INT_MAX hex:\nOg -> %x\n", INT_MAX);
	ft_printf("ft -> %x\n", INT_MAX);
	printf("expect:15\ngot:%i\n", ft_printf("a character: %c\n", 'a'));
	printf("expect:15\ngot:%i\n", ft_printf("a character: %c\n", 'B'));
	printf("expect:16\ngot:%i\n", ft_printf("an interger: %i\n", 10));
	printf("expect:18\ngot:%i\n", ft_printf("an interger: %i\n", -1));
	printf("expect:19\ngot:%i\n", ft_printf("an interger: %i\n", 9));
	printf("expect28:\ngot:%i\n", ft_printf("a max interger: %i\n", -2147483648));
	printf("expect:24\ngot:%i\n", ft_printf("an interger: %i\n", -4657));
	printf("expect:39\ngot:%i\n", ft_printf("a positive interger: %i\n", 4657128));
	printf("expect:33\ngot:%i\n", ft_printf("a string: %s\n", "null terminated string"));
	printf("expect:18\ngot:%i\n", ft_printf("an empty string: %s\n", ""));
	printf("expect:n/a\n got:%i\n", ft_printf("hex, no cap: %x\n", 1234));
	printf("expect:n/a\n got:%i\n", ft_printf("hex, cap: %X\n", 1234));
	printf("expect:n/a\n got:%i\n", ft_printf("hex, no cap: %x\n", -1));
	printf("expect:n/a\n got:%i\n", ft_printf("hex, cap: %X\n", -1));
	printf("expect:n/a\n got:%i\n", ft_printf("hex, no cap: %x\n", 100));
	printf("expect:n/a\n got:%i\n", ft_printf("hex, cap: %X\n", 100));
	printf("expect:n/a\n got:%i\n", ft_printf("hex, no cap: %x\n", -2123));
	printf("expect:n/a\n got:%i\n", ft_printf("hex, cap: %X\n", -2123));
	printf("expect:n/a\n got:%i\n", ft_printf("a percent: %%\n"));
	ft_printf("pointer test: %p\n%p\n%p\n", c, i, p);
}
