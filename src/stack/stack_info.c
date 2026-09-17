/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_info.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherif <hcherif@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 12:18:48 by hcherif           #+#    #+#             */
/*   Updated: 2026/09/17 14:36:10 by hcherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_size(t_stack *stack)
{
	int	count;

	count = 0;
	while (stack != NULL)
	{
		count++;
		stack = stack->next;
	}
	return count;
}

int	is_sorted(t_stack *stack)
{
	while (stack != NULL && stack->next != NULL)
	{
		if (stack->value > stack->next->value)
			return (0);	
		stack = stack->next;
	}
	return (1);
}

int	min_position(t_stack *stack)
{
	int	min_value;
	int	min_pos;
	int	current_pos;
	
	if (stack == NULL)
		return (-1);
	min_value = stack->value;
	min_pos = 0;
	current_pos = 0;
	while (stack != NULL)
	{
		if(stack->value < min_value)
		{
			min_value = stack->value;
			min_pos = current_pos;
		}
		current_pos++;
		stack = stack->next;
	}
	return (min_pos);
}
