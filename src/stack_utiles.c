/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utiles.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:36:46 by acennadi          #+#    #+#             */
/*   Updated: 2025/04/18 23:02:05 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	has_duplicates(int *array, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[i] == array[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

t_stacks	*init_stacks(int size)
{
	t_stacks	*stacks;

	if (size < 1)
		exit_error();
	stacks = malloc(sizeof(t_stacks));
	if (!stacks)
		error_exit(stacks);
	stacks->a = malloc(sizeof(int) * size);
	stacks->b = malloc(sizeof(int) * size);
	if (!stacks->a || !stacks->b)
		error_exit(stacks);
	return (stacks);
}

int	fill_stack_a(char *str, t_stacks *stacks)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (str[i])
		{
			stacks->a[index] = ft_atoi(str + i);
			index++;
			while (str[i] && str[i] != ' ')
				i++;
		}
	}
	stacks->size_a = index;
	stacks->size_b = 0;
	return (1);
}

int	is_sorted(t_stacks *stacks)
{
	int	i;

	i = 0;
	while (i < stacks->size_a - 1)
	{
		if (stacks->a[i] > stacks->a[i + 1])
			return (0);
		i++;
	}
	return (1);
}
