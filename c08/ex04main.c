/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osuchane <osuchane@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:51:03 by osuchane          #+#    #+#             */
/*   Updated: 2022/10/27 17:41:16 by osuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"
#include "ft_strs_to_tab.c"

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
