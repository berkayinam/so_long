/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:19:04 by binam             #+#    #+#             */
/*   Updated: 2022/02/12 19:16:55 by binam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpointer(unsigned long int n)
{
	int	print_number;

	print_number = 0;
	if (n >= 16)
		print_number += ft_printpointer(n / 16);
	print_number += ft_printchar("0123456789abcdef"[n % 16]);
	return (print_number);
}
