/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:19:36 by acennadi          #+#    #+#             */
/*   Updated: 2025/04/18 21:19:55 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_five(t_stacks *stacks)
{
	int	smallest_pos;

	smallest_pos = find_smallest_pos(stacks);
	if (smallest_pos == 1)
		sa(stacks);
	else if (smallest_pos == 2)
	{
		ra(stacks);
		ra(stacks);
	}
	else if (smallest_pos == 3)
	{
		ra(stacks);
		ra(stacks);
		ra(stacks);
	}
	else if (smallest_pos == 4)
	{
		rra(stacks);
	}
	pb(stacks);
	sort_four(stacks);
	pa(stacks);
}
