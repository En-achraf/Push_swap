/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:59:50 by acennadi          #+#    #+#             */
/*   Updated: 2025/04/18 22:00:07 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_stacks *stacks)
{
	int	i;

	if (!stacks || stacks->size_b < 1)
		clean_exit(stacks);
	i = stacks->size_a;
	while (i > 0)
	{
		stacks->a[i] = stacks->a[i - 1];
		i--;
	}
	stacks->a[0] = stacks->b[0];
	i = 0;
	while (i < stacks->size_b - 1)
	{
		stacks->b[i] = stacks->b[i + 1];
		i++;
	}
	stacks->size_b--;
	stacks->size_a++;
	write(1, "pa\n", 3);
}

void	pb(t_stacks *stacks)
{
	int	i;

	if (!stacks || stacks->size_a < 1)
		clean_exit(stacks);
	i = stacks->size_b;
	while (i > 0)
	{
		stacks->b[i] = stacks->b[i - 1];
		i--;
	}
	stacks->b[0] = stacks->a[0];
	i = 0;
	while (i < stacks->size_a - 1)
	{
		stacks->a[i] = stacks->a[i + 1];
		i++;
	}
	stacks->size_a--;
	stacks->size_b++;
	write(1, "pb\n", 3);
}