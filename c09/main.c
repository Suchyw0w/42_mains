/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osuchane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:10:23 by osuchane          #+#    #+#             */
/*   Updated: 2022/10/29 18:10:24 by osuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#include "ex02/ft_split.c"

int	main(void)
{
	char test[] = "DIYAF9ZSpKcs0Rcv \n uzO\n        \nZ7zjEeonALOKQF5xq \n   \nQxp0b1ufFKGJ \n2n8R9zUvZEtOwmqf\n    ";

	char **arr = ft_split(test);

	int i = 0;
	while (arr[i] != 0)
	{
		printf("[%s]\n", arr[i]);
		++i;
	}
}
