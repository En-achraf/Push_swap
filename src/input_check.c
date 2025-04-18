/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 17:28:59 by acennadi          #+#    #+#             */
/*   Updated: 2025/04/18 22:54:04 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utiles.h"

int	is_valid_argument(char *str)
{
	int	i;

	i = 0;
	if (!str || !str[0])
		return (0);
	while (str[i] && str[i] == ' ')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (!ft_isdigit(str[i + 1]) || (i > 0 && str[i - 1] != ' '))
				return (0);
			i++;
		}
		while (str[i] && ft_isdigit(str[i]))
			i++;
		while (str[i] && str[i] == ' ')
			i++;
		if (str[i] && !ft_isdigit(str[i]) && str[i] != '-' && str[i] != '+')
			return (0);
	}
	return (1);
}

int	check_input(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (!is_valid_argument(av[i]))
			return (0);
		i++;
	}
	return (1);
}
