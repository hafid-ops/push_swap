/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherif <hcherif@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 17:26:24 by hcherif           #+#    #+#             */
/*   Updated: 2026/09/15 20:25:56 by hcherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void push_top(t_stack **from, t_stack **to)
{
	t_stack	*moving;

	if (from == NULL || *from == NULL)
		return ;
	moving = *from;
	*from = moving->next;
	moving->next = *to;
	*to = moving;
}

void	pa(t_stack **a, t_stack **b)
{
	if (b == NULL || *b == NULL)
		return ;
	push_top(b, a);
	ft_printf("pa\n");
}

void pb(t_stack **a, t_stack **b)
{
	if (a == NULL || *a == NULL)
		return ;
	push_top (a, b);
	ft_printf("pb\n");
}
