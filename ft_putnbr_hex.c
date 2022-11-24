/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbrisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:50:43 by fbrisson          #+#    #+#             */
/*   Updated: 2022/11/23 16:37:40 by fbrisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putnbr_hex_addr(unsigned long int n)
{
	int	base;

	base = 16;
	if (base_len > base)
	{
		putnbr_hex_addr(n % base);
	}
	else
	{
		putnbr_hex_addr(n / base);
		putnbr_hex_addr(n % base);
	}
	return ();
}

int	ft_putnbr_addr(void *ptr)
{
	unsigned long int	addr;

	addr = (unsigned long int) ptr;
	ft_putnbr_hex_addr(addr);
}
