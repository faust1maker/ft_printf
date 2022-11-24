/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:57:41 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/24 11:10:36 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <stdarg.h>
# include <stdint.h>

void	ft_putnbr(int n, int fd);
void	ft_putnbr_base(int n, char *base);
void	ft_putptr(uintptr_t num);
void	ft_putstr(char *s);

char	*ft_strdup(const char *s);

int	ft_printpercent(void);
int	ft_printstr(char *s);
int	ft_printptr(unsigned long long ptr);
int	ft_ptr_len(uintptr_t num);
int	ft_putchar(char c);
int	ft_strlen(const char *s);

#endif
