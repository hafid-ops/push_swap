/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_mode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherif <hcherif@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 12:01:54 by hcherif           #+#    #+#             */
/*   Updated: 2026/08/22 12:20:21 by hcherif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	str_equal(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] == s2[i]);
}

int	parse_mode(char *arg, t_sort_mode *mode)
{
	if (str_equal(arg, "--simple"))
		*mode = MODE_SIMPLE;
	else if (str_equal(arg, "--medium"))
		*mode = MODE_MEDIUM;
	else if (str_equal(arg, "--complex"))
		*mode = MODE_COMPLEX;
	else if (str_equal(arg, "--adaptive"))
		*mode = MODE_ADAPTIVE;
	else
		return (0);
	return (1);
}
