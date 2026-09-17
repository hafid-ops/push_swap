/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherif <hcherif@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 20:29:54 by hcherif           #+#    #+#             */
/*   Updated: 2026/09/15 20:42:39 by hcherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_top(t_stack **stack)
{
	t_stack *first;
	t_stack *last;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
	
	first = *stack;
	last = *stack;
	while (last->next != NULL)
		last = last->next;
	*stack = first->next;
	first->next = NULL;
	last->next = first;
}

void	ra(t_stack **a)
{
	if (a == NULL || *a == NULL || (*a)->next == NULL)
		return ;
	rotate_top(a);
	ft_printf("ra\n");
}

void	rb(t_stack **b)
{
	if (b == NULL || *b == NULL || (*b)->next == NULL)
		return ;
	rotate_top(b);
	ft_printf("rb\n");
}

void	rr(t_stack **a, t_stack **b)
{
	rotate_top(a);
	rotate_top(b);
	ft_printf("rr\n");
}
