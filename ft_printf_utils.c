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

size_t    print_ptr(void *p)
{
    size_t ptr_value;

    ptr_value = (size_t) p;
    write (1, "0x", 2);
    ft_putnbr_base (ptr_value, "0123456789abcdef");
}

void	print_hex(void *var)
{
	
}