/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:49:05 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/24 15:11:34 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_num_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa_unsigned(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_num_len(n);
	num = malloc(sizeof(*num) * (len + 1));
	if (!num)
		return (NULL);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = n % 10 + 48;
		n /= 10;
		len--;
	}
	return (num);
}

int	ft_print_unsigned(unsigned int n)
{
	char	*num;
	int		print_len;

	print_len = 0;
	if (n == 0)
		print_len += write(1, "0", 1);
	else
	{
		num = ft_itoa_unsigned(n);
		print_len += ft_printstr(num);
		free(num);
	}
	return (print_len);
}

/*

int	main(void)
{
	printf("%d", ft_print_unsigned(12345));
	return (0);
}*/
