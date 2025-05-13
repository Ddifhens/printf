/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 13:08:03 by jormanue          #+#    #+#             */
/*   Updated: 2025/05/13 18:37:04 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int a;
	int b;

	printf("expect:16\ngot:%i\n", ft_printf("a character: %c\n", 'a'));
	printf("expect:15\ngot:%i\n", ft_printf("a character: %c\n", 'B'));
	printf("expect:16\ngot:%i\n", ft_printf("an interger: %i\n", 10));
	printf("expect:18\ngot:%i\n", ft_printf("an interger: %i\n", -1));
	printf("expect:19\ngot:%i\n", ft_printf("an interger: %i\n", 9));
	printf("expect28:\ngot:%i\n", ft_printf("a max interger: %i\n", -2147483648));
	printf("expect:24\ngot:%i\n", ft_printf("an interger: %i\n", -4657));
	printf("expect:39\ngot:%i\n", ft_printf("a positive interger: %i\n", 4657128));
	printf("expect:33\ngot:%i\n", ft_printf("a string: %s\n", "null terminated string"));
	printf("expect:18\ngot:%i\n", ft_printf("an empty string: %s\n", ""));
	printf("min and max test\n yours:\n");
	b = ft_printf("%i %i %i %i\n", LONG_MIN, LONG_MAX, ULONG_MAX, INT_MAX);
	printf("original printf\n");
	a = printf("%i %i %i %i\n", LONG_MIN, LONG_MAX, ULONG_MAX, INT_MAX);
	printf("return values:\nYours:%i\nOriginal:%i\n"b,a);
}
