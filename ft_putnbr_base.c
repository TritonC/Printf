/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:29:01 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/07/07 16:50:30 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long long int nbr, char *base, int base_size)
{
	int	i;

	i = 0;
	if (nbr < 0)
	{
		ft_putchar(45);
		nbr *= -1;
		i++;
	}
	if (nbr >= (unsigned long long int)base_size)
	{
		i = ft_putnbr_base(nbr / base_size, base, base_size);
	}
	ft_putchar(base[nbr % base_size]);
	i++;
	return (i);
}

int	ft_base_numb(long long int n, const char format)
{
	int	count;

	count = 0;
	if (format == 'x')
		count = ft_putnbr_base(n, "0123456789abcdef", 16);
	else if (format == 'X')
		count = ft_putnbr_base(n, "0123456789ABCDEF", 16);
	return (count);
}
