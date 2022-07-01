/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 16:14:57 by marvin            #+#    #+#             */
/*   Updated: 2022/07/01 16:14:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    print_ptr(void *p)
{
	size_t ptr_value;

	ptr_value = (size_t) p;
	write (1, "0x", 2);
	ft_putnbr_base (ptr_value, "0123456789abcdef");
}