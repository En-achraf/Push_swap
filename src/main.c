/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:39:13 by acennadi          #+#    #+#             */
/*   Updated: 2025/04/18 20:45:08 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utiles.h"

int main(int ac, char **av)
{
    t_stacks *stacks;
    
    if (ac > 2)
        return (0);
    stacks = parse_input(ac, av);
    if (!stacks)
        exit_error();
    return 0;
}
