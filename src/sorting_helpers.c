/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_helpers                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:50:40 by acennadi          #+#    #+#             */
/*   Updated: 2025/04/18 21:51:02 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_smallest_pos(t_stacks *stacks)
{
	int	smallest;
	int	smallest_pos;
	int	i;

	smallest = stacks->a[0];
	smallest_pos = 0;
	i = 1;
	while (i < stacks->size_a)
	{
		if (stacks->a[i] < smallest)
		{
			smallest = stacks->a[i];
			smallest_pos = i;
		}
		i++;
	}
	return (smallest_pos);
}