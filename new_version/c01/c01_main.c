/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c01_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osuchane <osuchane@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 08:41:55 by osuchane          #+#    #+#             */
/*   Updated: 2022/10/19 12:53:11 by osuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>


void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int	ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);


void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
	{
        for (j = 0; j < n - i - 1; j++)
		{
            if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	//00
	printf("======================================================\n");
	printf("=                        EX 00                       =\n");
	printf("======================================================\n");
	int	*nbr;
	int	number;
	int exp_output_ex00 = 42;

	nbr = &number;
	ft_ft(nbr);
	printf("Expected output: %d\n", exp_output_ex00);
	printf("Output - %d\n", *nbr);
	if (exp_output_ex00 == *nbr)
		printf("Success ✅\n");
	else
		printf("Error ❌\n");
	printf("======================================================");
	printf("\n");
	//01
	printf("======================================================\n");
	printf("=                        EX 01                       =\n");
	printf("======================================================\n");
	int numberex01;
	int	*ptr1;
	int	**ptr2;
	int ***ptr3;
	int	****ptr4;
	int	*****ptr5;
	int	******ptr6;
	int	*******ptr7;
	int	********ptr8;
	int	*********nbrr;
	int exp_output_ex01 = 42;

	numberex01 = 10;

	ptr1 = &numberex01;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	nbrr = &ptr8;

	printf("Original number: %d\n", numberex01);
	ft_ultimate_ft(nbrr);
	printf("Expected output: %d\n", exp_output_ex01);
	printf("Output - %d\n", numberex01);
	if (numberex01 == exp_output_ex01)
		printf("Success ✅\n");
	else
		printf("Error ❌\n");
	printf("======================================================");
	printf("\n");
	//02
	printf("======================================================\n");
	printf("=                        EX 02                       =\n");
	printf("======================================================\n");
	int x = 42;
	int y = 21;
	int swapped_x = x;
	int swapped_y = y;

	printf("Original x: %d y: %d", x, y);
	ft_swap(&x, &y);
	printf("\nExpected output x: %d y: %d", swapped_y, swapped_x);
	printf("\nOutput - Swapped x: %d y: %d\n", x, y);
	if (swapped_x == y && swapped_y == x)
		printf("Success ✅\n");
	else
		printf("Error ❌\n");
	printf("======================================================");
	printf("\n");
	//03
	printf("======================================================\n");
	printf("=                        EX 03                       =\n");
	printf("======================================================\n");
	int a = 6, b = 4;
	int *div = &a;
	int *mod = &b;
	int divided = b != 0 ? a / b : 0, moduled = b != 0 ? a % b : 0;

	printf("Original a: %d b: %d \n", *div, *mod);
	printf("Expected output Divide: %d Modulo: %d \n", divided, moduled);
	ft_div_mod(a, b, div, mod);
	printf("Output - Divide: %d Modulo: %d\n", *div, *mod);
	if (*div == divided && moduled == *mod)
		printf("Success ✅\n");
	else
		printf("Error ❌\n");
	printf("======================================================");
	printf("\n");
	//04
	printf("======================================================\n");
	printf("=                        EX 04                       =\n");
	printf("======================================================\n");
	int xx = 6, yy = 4;
	int *aa = &xx, *bb = &yy;
	int divide_2 = yy != 0 ? xx / yy : 0, modulo_2 = yy != 0 ? xx % yy : 0;
	printf("Original: x: %d y: %d\n", *aa, *bb);
	printf("Expected output: x: %d y: %d", divide_2, modulo_2);
	ft_ultimate_div_mod(aa, bb);
	printf("\nOutput - Divide: %d Modulo: %d\n", *aa, *bb);
	if (*aa == divide_2 && modulo_2 == *bb)
		printf("Success ✅\n");
	else
		printf("Error ❌\n");
	printf("======================================================");
	printf("\n");
	//05
	printf("======================================================\n");
	printf("=                        EX 05                       =\n");
	printf("======================================================\n");
	char string[] = "Some random string";
	printf("Original: %s\n", string);
	printf("Expected output: ");
	char expected_str = puts(string);
	write(1, "Output - ", 9);
	ft_putstr("Some random string");
	write(1, "\n", 1);
	if (strcmp(string, &expected_str))
		printf("Success ✅\n");
	else
		printf("Error ❌\n");
	printf("======================================================");
	printf("\n");
	//06
	printf("======================================================\n");
	printf("=                        EX 06                       =\n");
	printf("======================================================\n");
	char strlen_string[] = "Martin likes chicken with rice";
	int strlen_int = strlen(strlen_string);
	printf("Original: %s\n", strlen_string);
	printf("Expected output: %d\n", strlen_int);
	int strlen_output = ft_strlen("Martin likes chicken with rice");
	printf("Output: %d\n", strlen_output);
	if (strlen_output == strlen_int)
		printf("Success ✅\n");
	else
		printf("Error ❌\n");
	printf("======================================================");
	printf("\n");
	//07
	printf("======================================================\n");
	printf("=                        EX 07                       =\n");
	printf("======================================================\n");
	int arr[] = {1, 5, 3, 2, 9};
	int size = sizeof(arr) / sizeof(arr[0]);
	int arrExp[size];
	int	arrout[size];
	int i = 0, j = 0;

	printf("Original array: ");
	while (size > i)
	{
		printf("%d", arr[i]);
		i++;
	}
	printf("\nExpected output: ");
	int k = 1;
	while (k <= size)
	{
		printf("%d", arr[size - k]);
		arrExp[k-1] = arr[size - k];
		k++;
	}

	ft_rev_int_tab(arr, size);
	printf("\n");

	printf("Output: ");
	while (size > j)
	{
		printf("%d", arr[j]);
		arrout[j] = arr[j];
		j++;
	}
	int l = 0;
	int counter = 0;
	while (l < size)
	{
		if (arrExp[l] == arrout[l])
		{
			counter++;
		}
		l++;
	}

	if (counter == size)
		printf("\nSuccess ✅\n");
	else
		printf("\nError ❌\n");
	printf("======================================================");
	printf("\n");
	//08
	printf("======================================================\n");
	printf("=                        EX 08                       =\n");
	printf("======================================================\n");
	int arrr[] = {4, 2, 7, 1, 3};
	int sizee = sizeof(arrr) / sizeof(arrr[0]);
	int test_arr[sizee];
	int ii = 0, jj = 0;

	printf("Original array: ");
	while (size > ii)
	{
		printf("%d", arrr[ii]);
		test_arr[ii] = arrr[ii];
		ii++;
	}
	printf("\nExpected output: ");
	bubbleSort(test_arr, sizee);
	while (sizee > jj)
	{
		printf("%d", test_arr[jj]);
		jj++;
	}
	ft_sort_int_tab(arrr, sizee);
	printf("\n");

	printf("Output: ");
	jj = 0;
	while (sizee > jj)
	{
		printf("%d", arrr[jj]);
		jj++;
	}
	int o = 0;
	int right = 0;
	while (o < sizee)
	{
		if (test_arr[o] == arrr[o])
		{
			right++;
		}
		o++;
	}

	if (right == sizee)
		printf("\nSuccess ✅\n");
	else
		printf("\nError ❌\n");
	return 0;
}
