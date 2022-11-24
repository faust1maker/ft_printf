/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:07:29 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/24 10:59:58 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	tri_selectif(va_list ptr_args, const char format)
{
	int	print_len;

	print_len = 0;
	if (format == 'c')
		print_len = ft_putchar(va_arg(args, int));
	else if (format == 's')
		print_len = ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		print_len = ft_printptr(va_arg(args, unsigned long long));
	else if (format == 'd' || c == 'i')
		print_len = ft_putnbr(va_arg((int));
	else if (format == 'u')
		print_len = ft_putnbr(va_arg((int), len));
	else if (format == 'x')
		print_len = ft_putnbr_hex(va_arg((int), c);
	else if (format == 'X')
		print_len = ft_putnbr_hex(va_arg((int), c));
	else if (format == '%')
		print_len = ft_printpercent();
	else
		return (print_len);
}

int	ft_printf(const char *s, ...)
{
	va_list ptr_args;
	int	i;
	int	print_len;

	i = 0;
	print_len = 0;
	va_start(ptr_args, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			print_len = tri_selectif(ptr_args, s[i]);
		}
		else
			print_len = ft_putchar(s[i]);
		i++;
	}
	va_end(ptr_args);
	return (print_len);
}

/*

int	main(void)
{
	int	a;
	a = 12;
	printf("PRINTF OFFICIAL : %s", "BABINKS");
	ft_printf("PRINTF MEGACUSTOM EDITION : %s", "BABINKS");
	printf("%p", &a);	
	return (0);
}*/
