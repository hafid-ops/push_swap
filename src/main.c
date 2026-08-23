/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherif <hcherif@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 13:25:06 by hcherif           #+#    #+#             */
/*   Updated: 2026/08/22 12:19:11 by hcherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_sort_mode	mode;

	a = NULL;
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
	stack_clear(&a);
	return (0);
}
