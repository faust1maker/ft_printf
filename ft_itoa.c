/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:47:36 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/24 16:47:16 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

static char	*ft_strdup(const char *s)
{
	char	*sdup;
	int		i;

	sdup = malloc(sizeof(*sdup) * (ft_strlen(s) + 1));
	if (!sdup)
		return (NULL);
	i = 0;
	while (s[i])
	{
		sdup[i] = s[i];
		i++;
	}
	sdup[i] = '\0';
	return (sdup);
}

static char	*int_fixer(int n, int i, int sign)
{
	char	*res;

	i += 1;
	if (sign == -1)
		i += 1;
	res = malloc(sizeof(*res) * (i + 1));
	if (!res)
		return (NULL);
	res[i] = '\0';
	i--;
	while (i > 0)
	{
		res[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	if (sign == -1)
		res[i] = '-';
	else
		res[i] = n + 48;
	return (res);
}

char	*ft_itoa(int n)
{	
	long int	lnb;
	char		*res;
	int			i;
	int			sign;

	sign = 1;
	i = 0;
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		sign = -1;
	n *= sign;
	lnb = n;
	while (lnb >= 10)
	{
		lnb /= 10;
		i++;
	}
	res = int_fixer(n, i, sign);
	return (res);
}

/*

int	main(void)
{
	printf("%s", ft_itoa(INT_MAX));
	return (0);
}*/
