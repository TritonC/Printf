/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 15:59:22 by marvin            #+#    #+#             */
/*   Updated: 2022/07/01 15:59:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	void *ptr;
	int a;
	char b[] = "hola";
	
	print_ptr(ptr);
	printf("%p", ptr);
	// this is how print_hex have to work, return in hexadecimal an array!
}