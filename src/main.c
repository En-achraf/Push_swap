/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:39:13 by acennadi          #+#    #+#             */
/*   Updated: 2025/04/18 22:52:26 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	stack_sort(t_stacks *stacks)
{
	if (!is_sorted(stacks))
	{
		if (stacks->size_a == 2)
			sort_three(stacks);
		else if (stacks->size_a == 3)
			sort_three(stacks);
		else if (stacks->size_a == 4)
			sort_four(stacks);
		else if (stacks->size_a == 5)
			sort_five(stacks);
		else
			sort_big(stacks);
	}
}

int	main(int ac, char **av)
{
	t_stacks	*stacks;

	if (ac < 2)
		return (0);
	stacks = parse_input(ac, av);
	if (!stacks)
		exit_error();
	stack_sort(stacks);
	if (stacks)
		free_stacks(stacks);
	return (0);
}
