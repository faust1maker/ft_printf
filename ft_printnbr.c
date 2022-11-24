/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:05:33 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/24 16:47:54 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int n)
{
	char	*num;
	int		len;

	len = 0;
	num = ft_itoa(n);
	len = ft_printstr(num);
	free(num);
	return (len);
}

/*

int	main(void)
{
	ft_printnbr(12345);
	return (0);
}*/
