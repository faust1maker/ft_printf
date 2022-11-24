/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:07:29 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/24 16:59:59 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_tri_selectif(va_list ptr_args, const char format)
{
	int	print_len;

	print_len = 0;
	if (format == 'c')
		print_len += ft_putchar(va_arg(ptr_args, int));
	else if (format == 's')
		print_len += ft_printstr(va_arg(ptr_args, char *));
	else if (format == 'p')
		print_len += ft_printptr(va_arg(ptr_args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_len += ft_printnbr(va_arg(ptr_args, int));
	else if (format == 'u')
		print_len += ft_print_unsigned(va_arg(ptr_args, unsigned int));
	else if (format == 'x' || format == 'X')
		print_len += ft_print_hex(va_arg(ptr_args, unsigned int), format);
	else if (format == '%')
		print_len += ft_printpercent();
	return (print_len);
}

int	ft_printf(const char *s, ...)
{
	va_list	ptr_args;
	int		i;
	int		print_len;

	i = 0;
	print_len = 0;
	va_start(ptr_args, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			print_len += ft_tri_selectif(ptr_args, s[i]);
		}
		else
			print_len += ft_putchar(s[i]);
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
