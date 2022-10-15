/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c01_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osuchane <osuchane@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 08:41:55 by osuchane          #+#    #+#             */
/*   Updated: 2022/10/15 08:41:56 by osuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

//#include "ex00/ft_ft.c"
//#include "ex01/ft_ultimate_ft.c"
//#include "ex02/ft_swap.c"
//#include "ex03/ft_div_mod.c"
//#include "ex04/ft_ultimate_div_mod.c"
//#include "ex05/ft_putstr.c"
//#include "ex06/ft_strlen.c"
//#include "ex07/ft_rev_int_tab.c"
//#include "ex08/ft_sort_int_tab.c"

/*
1. put this file into main directory (one that you clone)
	E.g git clone xxx
	cd xxx - here you will put main.c or make your own main.c and copy and paste code
2. Uncomment include of function you want to test (all can be uncommented if there is no function with the same name)
3. Uncomment block of code (multiple lines) where is function located (you can see numbers of exercises on the lines so uncomment it right below the number)
4. go to terminal to clonned repository E.g xxx where you have main.c and run cc -Wall -Wextra - Werror main.c
5. Now just run ./a.out and you will se output of the function you are testing
6. you have to comment everything back (you can use ctrl z if you have it opened in vscode) and then uncomment another function and so on...
*/


int main()
{
	//00
	/*
	int	*nbr;
	int	number;

	nbr = &number;
	ft_ft(nbr);
	printf("number: %d", *nbr);
	*/
	//01
	/*
	int number;
	int	*ptr1;
	int	**ptr2;
	int ***ptr3;
	int	****ptr4;
	int	*****ptr5;
	int	******ptr6;
	int	*******ptr7;
	int	********ptr8;
	int	*********nbr;

	number = 10;

	//point address of variable number to ptr1 and so on..
	ptr1 = &number;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	nbr = &ptr8;

	//print value of number - 10
	printf("%d\n", number);
	//call function to change value from 10 to 42
	ft_ultimate_ft(nbr);
	//print value of number - 42
	printf("%d\n", number);
	*/
	//02
	/*
	int x = 42;
	int y = 21;

	printf("before swap x: %d y: %d", x, y);
	ft_swap(&x, &y);
	printf("\nafter swap x: %d y: %d", x, y);
	*/
	//03
	/*
	int a = 4, b = 2;
	int *div = &a;
	int *mod = &b;

	printf("before: div: %d mod: %d \n", *div, *mod);
	ft_div_mod(a, b, div, mod);
	printf("after: div: %d mod: %d ", *div, *mod);
	*/
	//04
	/*
	int x = 4, y = 2;
	int *a = &x, *b = &y;
	printf("before: x: %d y: %d", x, y);
	ft_ultimate_div_mod(a, b);
	printf("\nafter: x: %d y: %d", *a, *b);
	*/
	//05
	//ft_putstr("Some random string");
	//06
	//printf("len: %d", ft_strlen("Martin likes chicken with rice"));
	//07
	/*
	int arr[] = {1, 5, 3, 2, 9};
	int size = sizeof(arr) / sizeof(arr[0]);
	int i = 0, j = 0;

	printf("array before: ");
	while (size > i)
	{
		printf("%d", arr[i]);
		i++;
	}

	ft_rev_int_tab(arr, size);
	printf("\n");

	printf("array after: ");
	while (size > j)
	{
		printf("%d", arr[j]);
		j++;
	}
	*/
	//08
	/*
	int arr[] = {4, 2, 7, 1, 3};
	int size = sizeof(arr) / sizeof(arr[0]);
	int i = 0, j = 0;

	printf("array before: ");
	while (size > i)
	{
		printf("%d", arr[i]);
		i++;
	}

	ft_sort_int_tab(arr, size);
	printf("\n");

	printf("array after sorted: ");
	while (size > j)
	{
		printf("%d", arr[j]);
		j++;
	}
	*/
	return 0;
}
