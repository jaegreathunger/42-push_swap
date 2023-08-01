/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:30:22 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/01 12:13:07 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include "includes/libft.h"

typedef struct s_node {
	int				value;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack {
	struct s_node	*head;
	struct s_node	*tail;
}	t_stack;

// Structure
t_node	*generate_node(int value);
void	insert_at_head(t_node **head, t_node **tail, int value);
void	insert_after_node(t_node *node_to_insert_after, t_node *new_node);
int		remove_head(t_stack *stack);

// Operations
void	swap(t_node **head, char c);
void	ss(t_node **a_head, t_node **b_head);
void	push(t_stack *from, t_stack *to);

#endif
