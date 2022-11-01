/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osuchane <osuchane@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:14:24 by osuchane          #+#    #+#             */
/*   Updated: 2022/11/01 09:42:57 by osuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "ex00/ft_foreach.c"
#include "ex01/ft_map.c"
#include "ex02/ft_any.c"
#include "ex03/ft_count_if.c"
#include "ex04/ft_is_sort.c"
//#include "ex06/ft_sort_string_tab.c"
#include "ex07/ft_advanced_sort_string_tab.c"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

int	test(char *str)
{
	if (*str == 'A')
		return (1);
	return (0);
}

void	ft_putnbr(int nb)
{
	if (nb <= 2147483647 && nb >= -2147483648)
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else if (nb == -2147483648)
		{
			ft_putchar('-');
			ft_putchar('2');
			ft_putnbr(147483648);
		}
		else if (nb < 0)
		{
			ft_putchar('-');
			ft_putnbr(-nb);
		}
		else
		{
			ft_putchar(nb + '0');
		}
	}
}

int	ft_iterative_factorial(int nb)
{
	int	number;

	number = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		number *= nb;
		nb--;
	}
	return (number);
}

int	sort(int x, int y)
{
	if (x < y)
		return -1;
	else if (x == y)
		return 0;
	else
		return 1;
}

int main()
{
	//00

	int	array[] = {5, 8, 10, 15, -2147483648, 2147483647};
	int arr_len = sizeof(array) / sizeof(array[0]);
	ft_foreach(array, arr_len, &ft_putnbr);

	//01
	/*
	int	array_map[] = {5, 2, 3};
	int	*result;
	int arr_map_len = sizeof(array_map) / sizeof(array_map[0]);
	result = ft_map(array_map, arr_map_len, &ft_iterative_factorial);
	int k = 0;
	while (k < arr_map_len)
	{
		printf("%d", result[k]);
	}
	*/
	//02
	/*
	char	**strs;
	strs = malloc(3 * sizeof(char *));
	strs[0] = "A";
	strs[1] = "world";
	strs[2] = NULL;
	int i = 0;
	while (i < 3)
	{
		printf("%d\n", 	ft_any(&strs[i], test));
		i++;
	}
	*/
	//03
	/*
	char	**strs;
	strs = malloc(4 * sizeof(char *));
	strs[0] = "A";
	strs[1] = "z";
	strs[2] = "world";
	strs[3] = "NULL";
	printf("%d\n", ft_count_if(strs, 4, test));
	*/
	//04
	/*
	int	arr[] = {1, 2, 4, 3, 7, 5};
	int	arr_sorted[] = {1, 2, 3, 4, 5};
	int arr_len = sizeof(arr) / sizeof(arr[0]);
	int arr_sorted_len = sizeof(arr_sorted) / sizeof(arr_sorted[0]);
	printf("%d\n", ft_is_sort(arr, arr_len, sort));
	printf("%d\n", ft_is_sort(arr_sorted, arr_sorted_len, sort));
	*/
	//05
	//06
	/*
	int		i;
	char	**tab;

	tab = malloc(6 * sizeof(char *));
	tab[0] = strdup("a");
	tab[1] = strdup("c");
	tab[2] = strdup("b");
	tab[3] = strdup("8");
	tab[4] = strdup("5");
	tab[5] = strdup("2");
	tab[6] = 0;
	i = 0;
	while (tab[i])
	{
		printf("tab[%d]: %s\n", i, tab[i]);
		i++;
	}
	ft_sort_string_tab(tab);
	printf("\n");
	i = 0;
	while (tab[i])
	{
		printf("tab[%d]: %s\n", i, tab[i]);
		i++;
	}
	*/
	//07
	/*
	int		i;
	char	**tab;

	tab = malloc(8 * sizeof(char *));
	tab[0] = strdup("Wosap");
	tab[1] = strdup("is");
	tab[2] = strdup("this");
	tab[3] = strdup("working");
	tab[4] = strdup("or");
	tab[5] = strdup("not");
	tab[6] = strdup("hmmm");
	tab[7] = 0;
	i = 0;
	while (tab[i])
	{
		printf("tab[%d]: %s\n", i, tab[i]);
		i++;
	}
	ft_advanced_sort_string_tab(tab, &ft_strcmp);
	printf("\n");
	i = 0;
	while (tab[i])
	{
		printf("tab[%d]: %s\n", i, tab[i]);
		i++;
	}
	*/
}

