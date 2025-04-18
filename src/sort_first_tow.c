/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_first_tow.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:04:51 by acennadi          #+#    #+#             */
/*   Updated: 2025/04/18 23:01:42 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	sort_two(t_stacks *stacks)
{
	if (stacks->size_a == 2)
	{
		if (stacks->a[0] > stacks->a[1])
			sa(stacks);
		return (1);
	}
	return (0);
}

void	sort_three(t_stacks *stacks)
{
	if (sort_two(stacks) == 1)
		return ;
	if (stacks->a[0] > stacks->a[1] && stacks->a[1] > stacks->a[2]
		&& stacks->a[0] > stacks->a[2])
	{
		sa(stacks);
		rra(stacks);
	}
	else if (stacks->a[0] > stacks->a[1] && stacks->a[1] < stacks->a[2]
		&& stacks->a[0] > stacks->a[2])
		ra(stacks);
	else if (stacks->a[0] < stacks->a[1] && stacks->a[1] > stacks->a[2]
		&& stacks->a[0] > stacks->a[2])
		rra(stacks);
	else if (stacks->a[0] > stacks->a[1] && stacks->a[1] < stacks->a[2]
		&& stacks->a[0] < stacks->a[2])
		sa(stacks);
	else if (stacks->a[0] < stacks->a[1] && stacks->a[1] > stacks->a[2]
		&& stacks->a[0] < stacks->a[2])
	{
		sa(stacks);
		ra(stacks);
	}
}
