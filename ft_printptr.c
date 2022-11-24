/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 10:44:29 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/24 15:49:04 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_ptr_len(uintptr_t num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		num /= 16;
		len++;
	}
	return (len);
}

static void	ft_putptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_putptr(num / 16);
		ft_putptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar(num + '0');
		else
			ft_putchar(num - 10 + 'a');
	}
}

int	ft_printptr(unsigned long long ptr)
{
	int	print_len;

	print_len = 0;
	if (ptr == 0)
	{
		print_len += write(1, "(nil)", 5);
	}
	else
	{
		print_len += write(1, "0x", 2);
		ft_putptr(ptr);
		print_len += ft_ptr_len(ptr);
	}
	return (print_len);
}

/*

int	main(void)
{
	char	*tab;

	ft_printptr((unsigned long long)tab);
	printf("\n%p", tab);
	return (0);
}*/
