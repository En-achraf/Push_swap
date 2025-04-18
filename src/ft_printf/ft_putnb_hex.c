/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnb_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 04:51:40 by acennadi          #+#    #+#             */
/*   Updated: 2025/04/18 22:26:36 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/utiles.h"

void	putnb_hex(unsigned int number, int mode, int *len)
{
	char	*hex;

	if (mode == 1)
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (number >= 16)
		putnb_hex(number / 16, mode, len);
	ft_putchar(hex[number % 16]);
	(*len)++;
}
