/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:06:40 by acennadi          #+#    #+#             */
/*   Updated: 2025/04/18 21:14:07 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_four(t_stacks *stacks)
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
		rra(stacks);
	pb(stacks);
	sort_three(stacks);
	pa(stacks);
}