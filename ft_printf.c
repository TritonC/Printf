/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 23:05:51 by marvin            #+#    #+#             */
/*   Updated: 2022/07/04 17:05:47 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_percent(void)
{
	write(1, "%", 1);
	return (1);
}

int	ft_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_toprint(va_list args, const char format)
{
	int	print_length;

	print_length = 0;
	if (format == 'c')
		print_length += ft_char(va_arg(args, int));
	else if (format == 's')
		print_length += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		print_length += ft_ptr(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		print_length += ft_base_numb(va_arg(args, long long int), format);
	else if (format == 'u')
		print_length += ft_unsigned_numb(va_arg(args, unsigned long int));
	else if (format == 'x' || format == 'X')
		print_length += ft_base_numb(va_arg(args, long long int), format);
	else if (format == '%')
		print_length += ft_percent();
	return (print_length);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		print_length;

	i = 0;
	print_length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_length += ft_toprint(args, str[i + 1]);
			i++;
		}
		else
			print_length += ft_char(str[i]);
		i++;
	}
	va_end(args);
	return (print_length);
}