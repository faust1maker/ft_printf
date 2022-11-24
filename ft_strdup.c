/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:26:11 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/22 16:40:30 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_strdup(const char *s)
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

/*

int	main(void)
{
	char	tab1[] = "BABINKS";

	printf("%s  \n", ft_strdup(tab1));
	printf("%s", strdup(tab1));
	return (0);
}*/
