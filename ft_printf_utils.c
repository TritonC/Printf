/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 12:02:52 by marvin            #+#    #+#             */
/*   Updated: 2022/07/01 12:02:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putstr(char *str)
{
	int	j;

	j = 0;
	while (str[j])
	{
		write(1, &str[j], 1);
		j++;
	}
}

void    print_ptr(void *p)
{
	size_t ptr_value;

	ptr_value = (size_t) p;
	write (1, "0x", 2);
	ft_putnbr_base (ptr_value, "0123456789abcdef");
}

void	print_hex(void *var)
{
	
}