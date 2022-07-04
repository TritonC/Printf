/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:29:01 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/07/04 16:47:15 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

int	ft_putnbr_base(long long int nbr, char *base)
{
	int					size;
	int					i;

	i = 0;
	size = check_base(base);
	if (nbr < 0)
	{
		ft_putchar(45);
		nbr *= -1;
		i++;
	}
	if (nbr >= (long long int)size)
	{
		i = ft_putnbr_base(nbr / size, base);
	}
	ft_putchar(base[nbr % size]);
	i++;
	return (i);
}

int	ft_base_numb(long long int n, const char format)
{
	int	count;

	count = 0;
	if (format == 'd' || format == 'i')
		count = ft_putnbr_base(n, "0123456789");
	else if (format == 'x')
		count = ft_putnbr_base(n, "0123456789abcdef");
	else if (format == 'X')
		count = ft_putnbr_base(n, "0123456789ABCDEF");
	return (count);
}
