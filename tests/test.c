/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormanue <jormanue@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 13:08:03 by jormanue          #+#    #+#             */
/*   Updated: 2025/05/11 16:27:31 by jormanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	printf("expect:1\ngot:%i\n",ft_printf("a character: %c\n", 'a'));
	printf("expect:1\ngot:%i\n",ft_printf("a character: %c\n", 'B'));
	printf("expect:2\ngot:%i\n",ft_printf("an interger: %i\n", 10));
	printf("expect:11\ngot:%i\n",ft_printf("a max interger: %i\n",-2147483648));
	printf("expect:5\ngot:%i\n",ft_printf("an interger: %i\n",-4657));
	printf("expect:7\ngot:%i\n",ft_printf("a positive interger: %i\n",4657128));
	printf("expect:22\ngot:%i\n",ft_printf("a string: %s\n", "null terminated string"));
	printf("expect:0\ngot:%i\n",ft_printf("an empty string: %s\n", ""));
}
