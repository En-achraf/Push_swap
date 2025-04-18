/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:33:44 by acennadi          #+#    #+#             */
/*   Updated: 2025/04/18 21:34:10 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_stacks *stacks)
{
	int	temp;

	if (!stacks || stacks->size_a < 2)
		clean_exit(stacks);
	temp = stacks->a[0];
	stacks->a[0] = stacks->a[1];
	stacks->a[1] = temp;
	write(1, "sa\n", 3);
}

void	sb(t_stacks *stacks)
{
	int	temp;

	if (!stacks || stacks->size_b < 2)
		clean_exit(stacks);
	temp = stacks->b[0];
	stacks->b[0] = stacks->b[1];
	stacks->b[1] = temp;
	write(1, "sb\n", 3);
}

void	ss(t_stacks *stacks)
{
	int	temp;

	if (!stacks || stacks->size_b < 2 || stacks->size_a < 2)
		clean_exit(stacks);
	temp = stacks->b[0];
	stacks->b[0] = stacks->b[1];
	stacks->b[1] = temp;
	temp = stacks->a[0];
	stacks->a[0] = stacks->a[1];
	stacks->a[1] = temp;
	write(1, "ss\n", 3);
}