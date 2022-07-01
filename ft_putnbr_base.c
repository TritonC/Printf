/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 15:55:16 by marvin            #+#    #+#             */
/*   Updated: 2022/07/01 15:55:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	check_base(char *base)
{
	int	b;
	int	i;

	b = 0;
	while (base[b])
	{
		if (base[b] == '+' || base [b] == '-')
			return (0);
		i = b + 1;
		while (base[i])
		{
			if (base[b] == base [i])
				return (0);
			i++;
		}
		b++;
	}
	if (b <= 1)
		return (0);
	return (b);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	num;
	int			size;
	int			count;

	count = 0;
	num = nbr;
	size = check_base(base);
	if (size > 1)
	{
		if (num < 0)
		{
			ft_putchar(45);
			num *= -1;
		}
		if (num >= size)
		{
			ft_putnbr_base(num / size, base);
			ft_putchar(base[num % size]);
		}
		else
			ft_putchar(base[num % size]);
	}
}
