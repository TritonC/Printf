/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:20:25 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/07/07 16:48:05 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	if (str == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (str[count])
	{
		write (1, &str[count], 1);
		count++;
	}
	return (count);
}

int	ft_ptr(unsigned long long nb)
{
	int	count;

	count = 0;
	write (1, "0x", 2);
	count = ft_putnbr_base(nb, "0123456789abcdef", 16);
	return (count + 2);
}

int	ft_unsigned_numb(unsigned int nb)
{
	int	nb_len;

	nb_len = 0;
	if (nb == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	ft_putnbr_base(nb, "0123456789", 10);
	while (nb != 0)
	{
		nb /= 10;
		nb_len++;
	}
	return (nb_len);
}

int	ft_putnbr(int nb)
{
	long int	n;
	int			n_len;

	n = nb;
	n_len = num_len(nb);
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
	return (n_len);
}
