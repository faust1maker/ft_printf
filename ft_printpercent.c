/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpercent.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 09:40:25 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/24 09:41:45 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printpercent(void)
{
	write(1, "%", 1);
	return (1);
}

/*

int	main(void)
{
	ft_printpercent();
	return (0);
}*/
