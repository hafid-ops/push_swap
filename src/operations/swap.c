/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherif <hcherif@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 13:09:23 by hcherif           #+#    #+#             */
/*   Updated: 2026/09/15 17:24:05 by hcherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void swap_top(t_stack **stack)
{
	t_stack *first;
	t_stack *second;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
	first = *stack;
	second = (*stack)->next;

	first->next = second->next;
	second->next = first;
	*stack = second;
}

void	sa(t_stack **stack)
{
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
	swap_top(stack);
	ft_printf("sa\n");
}

void	sb(t_stack **stack)
{
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
	swap_top(stack);
	ft_printf("sb\n");
}

void	ss(t_stack **a, t_stack **b)
{
	swap_top(a);
	swap_top(b);
	ft_printf("ss\n");
}
