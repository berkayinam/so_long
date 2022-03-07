/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: binam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:16:12 by binam             #+#    #+#             */
/*   Updated: 2022/02/12 19:16:13 by binam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printchar(char c);
int	ft_printstr(const char *str);
int	ft_printpointer(unsigned long int n);
int	ft_printnbr(int n);
int	ft_printunbr(unsigned int n);
int	ft_printx(unsigned int n, char c);
int	ft_printf(const char *str, ...);
int	format(char c, va_list arg);

#endif
