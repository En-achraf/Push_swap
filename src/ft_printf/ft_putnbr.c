/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 05:37:14 by acennadi          #+#    #+#             */
/*   Updated: 2025/04/18 22:25:54 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/utiles.h"

void	ft_putnbr(int n, int *len)
{
	unsigned int	nb;

	nb = n;
	if (n < 0)
	{
		ft_putchar('-');
		(*len)++;
		nb = -nb;
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
		(*len)++;
	}
	else
	{
		ft_putnbr(nb / 10, len);
		ft_putnbr(nb % 10, len);
	}
}
