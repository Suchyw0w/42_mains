/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osuchane <osuchane@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:07:59 by osuchane          #+#    #+#             */
/*   Updated: 2022/10/24 15:53:54 by osuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include "ex00/ft_iterative_factorial.c"
//#include "ex01/ft_recursive_factorial.c"
//#include "ex02/ft_iterative_power.c"
//#include "ex03/ft_recursive_power.c"
//#include "ex04/ft_fibonacci.c"
//#include "ex05/ft_sqrt.c"
//#include "ex06/ft_is_prime.c"
//#include "ex07/ft_find_next_prime.c"

int main()
{
	//00
	
	int num_factorial = 5;
	printf("factorial of number %d: %d\n", num_factorial,ft_iterative_factorial(num_factorial));
	
	num_factorial = 0;
	printf("factorial of number %d: %d\n", num_factorial,ft_iterative_factorial(num_factorial));
	
	num_factorial = 1;
	printf("factorial of number %d: %d\n", num_factorial,ft_iterative_factorial(num_factorial));
	//01
	/*
	int num_recursive_factorial = 5;
	printf("recursive factorial of number %d: %d\n", num_recursive_factorial, ft_recursive_factorial(num_recursive_factorial));
	
	num_recursive_factorial = 0;
	printf("recursive factorial of number %d: %d\n", num_recursive_factorial, ft_recursive_factorial(num_recursive_factorial));
	
	num_recursive_factorial = 1;
	printf("recursive factorial of number %d: %d\n", num_recursive_factorial, ft_recursive_factorial(num_recursive_factorial));
	*/
	//02
	/*
	int num_power = 5;
	int power = 3;
	printf("power of number %d: %d\n", num_power, ft_iterative_power(num_power, power));
	
	num_power = 0;
	Power = 3;
	printf("power of number %d: %d\n", num_power, ft_iterative_power(num_power, power));
	
	num_power = 5;
	power = 0;
	printf("power of number %d: %d\n", num_power, ft_iterative_power(num_power, power));
	
	num_power = 5;
	power = -2;
	printf("power of number %d: %d\n", num_power, ft_iterative_power(num_power, power));
	*/
	//03
	/*
	int num_recursive_power = 5;
	int recursive_power = 3;
	printf("recursive power of number %d: %d\n", num_recursive_power,ft_recursive_power(num_recursive_power, recursive_power));
	
	num_recursive_power = 0;
	recursive_power = 3;
	printf("recursive power of number %d: %d\n", num_recursive_power,ft_recursive_power(num_recursive_power, recursive_power));
	
	num_recursive_power = 5;
	recursive_power = 0;
	printf("recursive power of number %d: %d\n", num_recursive_power,ft_recursive_power(num_recursive_power, recursive_power));
	
	num_recursive_power = 5;
	recursive_power = -2;
	printf("recursive power of number %d: %d\n", num_recursive_power,ft_recursive_power(num_recursive_power, recursive_power));
	*/
	//04
	/*
	int num_fibonacci = 7;
	printf("fibonacci of number %d: %d\n", num_fibonacci, ft_fibonacci(num_fibonacci));
	
	num_fibonacci = -2;
	printf("fibonacci of number %d: %d\n", num_fibonacci, ft_fibonacci(num_fibonacci));
	*/
	//05
	/*
	int num_sqrt = 9;
	printf("sqrt of number %d: %d\n", num_sqrt, ft_sqrt(num_sqrt));
	*/
	//06
	/*
	int num_prime = 2147483647;
	printf("is %d prime number? Output: %d\n", num_prime, ft_is_prime(num_prime));
	
	num_prime = 11;
	printf("is %d prime number? Output: %d\n", num_prime, ft_is_prime(num_prime));
	*/
	//07
	/*
	int num_next_prime = 2147483646;
	printf("Next prime number after number %d is: %d\n", num_next_prime, ft_find_next_prime(num_next_prime));
	
	num_next_prime = 10;
	printf("Next prime number after number %d is: %d\n", num_next_prime, ft_find_next_prime(num_next_prime));
	
	num_next_prime = 5;
	printf("Next prime number after number %d is: %d\n", num_next_prime, ft_find_next_prime(num_next_prime));
	*/
	return 0;
}

