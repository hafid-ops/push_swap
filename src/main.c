/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherif <hcherif@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 13:25:06 by hcherif           #+#    #+#             */
/*   Updated: 2026/09/17 14:42:26 by hcherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

/*static void	print_stack(char *name, t_stack *stack)
{
	ft_printf("%s: ", name);
	while (stack != NULL)
	{
		ft_printf("%d ", stack->value);
		stack = stack->next;
	}
	ft_printf("\n");
}*/

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack *b;
	t_sort_mode	mode;

	a = NULL;
	b = NULL;
	mode = MODE_ADAPTIVE;
	if (argc == 1)
		return (0);
	if (parse_mode(argv[1], &mode))
	{
		if (argc == 2 || !parse_args(argc - 1, argv + 1, &a))
		{
			write(2, "Error\n", 6);
			return (1);
		}
	}
	else if (!parse_args(argc, argv, &a))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	ft_printf("min position = %d\n", min_position(a));
	stack_clear(&a);
	stack_clear(&b);
	return (0);
}
