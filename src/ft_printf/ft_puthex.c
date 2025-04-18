/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:31:08 by acennadi          #+#    #+#             */
/*   Updated: 2025/04/18 22:26:45 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/utiles.h"

void	ft_puthex(unsigned long n, int *lenth)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n >= 16)
		ft_puthex(n / 16, lenth);
	ft_putchar(hex[n % 16]);
	(*lenth)++;
}
