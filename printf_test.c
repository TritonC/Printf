/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:01:58 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/07/04 17:01:02 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int		test;
	void	*p;
	int		save_value;

	test = -123451237;
	printf("%x\n", test);
	printf("%zu\n", (size_t)p);
	printf("test punter: %p\n", p);
	save_value = ft_ptr(p);
	printf("\n%i\n", save_value);
	ft_printf("%d\n\n", test);
}
