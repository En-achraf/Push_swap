/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utiles.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 22:52:51 by acennadi          #+#    #+#             */
/*   Updated: 2025/04/18 22:53:01 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILES_H
# define UTILES_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdlib.h>
# include <unistd.h>
# include <unistd.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_stacks
{
	int		*a;
	int		*b;
	int		size_a;
	int		size_b;
}			t_stacks;

int			ft_printf(const char *format, ...);
void		ft_putchar(char c);
void		ft_putnbr(int n, int *len);
int			ft_putstr(char *s);
int			more_form(va_list pt_arg, const char *format, int i);
void		ft_puthex(unsigned long n, int *lenth);
void		ft_unputnbr(unsigned int nb, int *len);
void		putnb_hex(unsigned int number, int mode, int *len);

size_t		ft_strlen(const char *s);
char		*ft_strdup(const char *s);
char		*ft_strjoin(char const *s1, char const *s2);
int			ft_isdigit(int c);
long		ft_atoi(const char *str);

t_stacks	*init_stacks(int size);
int			fill_stack_a(char *str, t_stacks *stacks);
int			has_duplicates(int *array, int size);
int			is_sorted(t_stacks *stacks);
char		*join_arguments(int ac, char **av);
int			check_input(int ac, char **av);
int			is_valid_argument(char *str);
t_stacks	*parse_input(int ac, char **av);

void		exit_error(void);
void		error_exit(t_stacks *stacks);
void		clean_exit(t_stacks *stacks);
void		error_free(char *joined);
void		free_stacks(t_stacks *stacks);

#endif