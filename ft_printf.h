/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 14:27:25 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/07/04 17:06:08 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_putnbr_base(long long int nbr, char *base);
int		ft_putstr(char *str);
void	ft_putnbr(int num);
int		ft_ptr(unsigned long long n);
int		ft_unsigned_numb(unsigned int nb);
int		ft_base_numb(long long int n, const char format);
int		ft_printf(const char *str, ...);

#endif