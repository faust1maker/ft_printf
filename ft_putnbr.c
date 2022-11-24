/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:05:33 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/23 16:16:47 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int n)
{
	static int	i;

	i = 0;
	if (n == INT_MIN)
		return (ft_putstr("-2147483648"));
	if (n >= 0 && n < 10)
	{
		i += ft_putchar(n + '0');
		return (i);
	}
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(n * (-1));
		i += 1;
	}
	else
	{
		ft_putnbr(n / 10);
		i += ft_putchar((n % 10) + 48);
	}
	return (i);
}

/*

int	main(void)
{
	ft_putnbr('12345');
	return (0);
}*/
