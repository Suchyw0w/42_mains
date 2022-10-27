/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osuchane <osuchane@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:51:03 by osuchane          #+#    #+#             */
/*   Updated: 2022/10/27 15:55:50 by osuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//01
/*
#include "ex01/ft_boolean.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

t_bool	ft_is_even(int nbr)
{
	return ((EVEN(nbr)) ? TRUE : FALSE);
}

int	main(int argc, char **argv)
{
	(void)argv;
	if (ft_is_even(argc - 1) == TRUE)
		ft_putstr(EVEN_MSG);
	else
		ft_putstr(ODD_MSG);
	return (SUCCESS);
}
*/

//02
/*
#include <stdio.h>

#include "ex02/ft_abs.h"

int	main(void)
{
	int	i;

	i = -3;
	while (i <= 3)
	{
		printf("abs(%d) = %d\n", i, ABS(i));
		i++;
	}
}
*/

//03
/*
#include "ex03/ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int	main(void)
{
	t_point	point;

	set_point(&point);
	return (0);
}
*/

//04
/*
#include <stdlib.h>
#include <stdio.h>
#include "ex04/ft_stock_str.h"
#include "ex04/ft_strs_to_tab.c"

int	main(int argc, char **argv)
{
	int				index;
	t_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	index = 0;
	while (index < argc)
	{
		printf("original: %s\n", structs[index].str);
		printf("copied: %s\n", structs[index].copy);
		printf("size: %d\n", structs[index].size);
		index++;
	}
}
*/

//05
/*
#include <unistd.h>
#include "ex05/ft_show_tab.c"
#include "ex05/ft_stock_str.h"
#include "./ex04/ft_strs_to_tab.c"

int	main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
}
*/

