/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manuel <manuel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 13:29:05 by manuel            #+#    #+#             */
/*   Updated: 2022/07/05 13:33:50 by manuel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	num_len(int nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		count++;
	while (nb != 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

int ft_percent(void)
{
	write(1, "%", 1);
	return (1);
}

int ft_char(char c)
{
	write(1, &c, 1);
	return (1);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

