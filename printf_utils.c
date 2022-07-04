/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:20:25 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/07/04 17:34:13 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		write (1, &str[count], 1);
		count++;
	}
	return (count);
}

int	ft_ptr(void *p)
{
	unsigned long int	ptr_value;
	int					count;

	count = 0;
	ptr_value = (unsigned long int)p;
	write (1, "0x", 2);
	count = ft_putnbr_base(ptr_value, "0123456789abcdef");
	return (count + 2);
}

int	ft_unsigned_numb(unsigned long int nb)
{
	int	nb_len;

	nb_len = 0;
	if (nb == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	ft_putnbr_base(nb, "0123456789");
	while (nb != 0)
	{
		nb /= 10;
		nb_len++;
	}
	return (nb_len);
}
