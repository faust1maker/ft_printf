/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:57:41 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/24 16:49:38 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <stdarg.h>
# include <stdint.h>

void	ft_putstr(char *s);

char	*ft_itoa(int n);

int		ft_print_hex(unsigned int num, const char format);
int		ft_print_unsigned(unsigned int n);
int		ft_printf(const char *s, ...);
int		ft_printnbr(int n);
int		ft_printpercent(void);
int		ft_printptr(unsigned long long ptr);
int		ft_printstr(char *s);
int		ft_putchar(char c);
int		ft_tri_selectif(va_list ptr_args, const char format);

#endif
