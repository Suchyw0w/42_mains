/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osuchane <osuchane@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 08:50:49 by osuchane          #+#    #+#             */
/*   Updated: 2022/10/27 12:17:31 by osuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

#include "ex00/ft_strdup.c"
//#include "ex01/ft_range.c"
//#include "ex02/ft_ultimate_range.c"
//#include "ex03/ft_strjoin.c"
//#include "ex04/ft_convert_base.c"

int main()
{
	//00

	char s1[] = "Some text";
	printf("Source is: %s and dest: %s", s1, ft_strdup(s1));

	//01
	/*
	int min = 5;
	int max = 10;
	int i = 0;
	int *ptr;
	ptr = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d", ptr[i]);
		i++;
	}
	*/
	//02
	/*
	int min = 5;
	int max = 10;
	int i = 0;
	int range;
	int *num;
	range = ft_ultimate_range(&num, min, max);
	while (i < range)
	{
		printf("%d", num[i]);
		i++;
	}
	*/
	//03
	/*
	char	*sep;
	char	*res;
	int	size;
	size = 3;
	char	*strs[size];

	strs[0] = "Hello";
	strs[1] = "world";
	strs[2] = "malloc is not fun";

	sep = " ";
	res = ft_strjoin(size, strs, sep);
	printf("%s\n", res);
	free(res);
	*/
	//04 Error 404 not found
	//05 Error 404 not found
	return 0;
}


