/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utiles.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 20:46:07 by acennadi          #+#    #+#             */
/*   Updated: 2025/04/18 22:56:11 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utiles.h"

char	*join_arguments(int ac, char **av)
{
	int		i;
	char	*result;
	char	*temp;

	i = 1;
	result = NULL;
	while (i < ac)
	{
		if (!result)
			result = ft_strdup(av[i]);
		else
		{
			temp = ft_strjoin(result, " ");
			if (!temp)
				return (NULL);
			free(result);
			result = ft_strjoin(temp, av[i]);
			free(temp);
		}
		if (!result)
			return (NULL);
		i++;
	}
	return (result);
}
