/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherif <hcherif@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 20:43:42 by hcherif           #+#    #+#             */
/*   Updated: 2026/09/15 21:07:13 by hcherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void reverse_rotate_top(t_stack **stack)
{
	t_stack *last;
	t_stack *before_last;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
	before_last = *stack;
	while (before_last->next->next != NULL)
		before_last = before_last->next;
	last = before_last->next;
	before_last->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	rra(t_stack **a)
{
	if (a == NULL || *a == NULL || (*a)->next == NULL)
		return ;
	reverse_rotate_top(a);
	ft_printf("rra\n");
}

void	rrb(t_stack **b)
{
	if (b == NULL || *b == NULL || (*b)->next == NULL)
		return ;
	reverse_rotate_top(b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	reverse_rotate_top(a);
	reverse_rotate_top(b);
	ft_printf("rrr\n");
}
