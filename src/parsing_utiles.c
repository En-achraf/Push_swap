/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utiles.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 20:46:07 by acennadi          #+#    #+#             */
/*   Updated: 2025/04/18 20:46:08 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utiles.h"

char	*join_arguments(int ac, char **av)
{
	char	*result;
	char	*temp;
	int		i;

	result = NULL;
	i = 1;
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