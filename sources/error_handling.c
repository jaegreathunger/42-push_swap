/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:57:08 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/02 16:09:15 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_input(char *argv[])
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (!check_digit(argv[i]))
			return (0);
		else if (!check_int_range(argv[i]))
			return (0);
		else if (!check_duplicate(argv, i))
			return (0);
		i++;
	}
	return (1);
}

int error_sorted(t_stack *a, t_stack *b)
{
	free(a);
	free(b);
	ft_putendl_fd("ERROR", 2);
	return (1);
}

int	error_handling(char *argv[])
{
	if (!check_input(argv))
	{
		ft_putendl_fd("ERROR", 2);
		return (0);
	}
	return (1);
}
