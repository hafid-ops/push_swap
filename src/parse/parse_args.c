/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherif <hcherif@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 16:48:36 by hcherif           #+#    #+#             */
/*   Updated: 2026/08/22 11:45:28 by hcherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_valid_int(char *str)
{
	int	i;

	i = 0;
	if (!str || !str[0])
		return (0);
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	parsing_int(char *str, int *value)
{
	long	num;
	int		sign;
	int		i;

	num = 0;
	sign = 1;
	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		num = num * 10 + (str[i] - '0');
		if ((sign == 1 && num > INT_MAX) || (sign == -1 && (-num) < INT_MIN))
			return (0);
		i++;
	}
	*value = (int)(num * sign);
	return (1);
}

int	has_duplicate(t_stack *stack, int value)
{
	while (stack)
	{
		if (stack->value == value)
			return (1);
		stack = stack->next;
	}
	return (0);
}

int	parse_args(int argc, char **argv, t_stack **a)
{
	int		i;
	int		value;
	t_stack	*new;

	i = 1;
	while (i < argc)
	{
		if (!is_valid_int(argv[i]) || !parsing_int(argv[i], &value)
			|| has_duplicate(*a, value))
		{
			stack_clear(a);
			return (0);
		}
		new = stack_new(value);
		if (!new)
		{
			stack_clear(a);
			return (0);
		}
		stack_add_back(a, new);
		i++;
	}
	return (1);
}
