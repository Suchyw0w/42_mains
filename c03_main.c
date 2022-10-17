/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osuchane <osuchane@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:28:19 by osuchane          #+#    #+#             */
/*   Updated: 2022/10/17 13:43:30 by osuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

//#include "ex00/ft_strcmp.c"
//#include "ex01/ft_strncmp.c"
//#include "ex02/ft_strcat.c"
//#include "ex03/ft_strncat.c"
//#include "ex04/ft_strstr.c"
//#include "ex05/ft_strlcat.c"

int main()
{
	//00
	/*
	char s1[] = "first";
	char s2[] = "firs";
	printf("standard c function: %d ", strcmp(s1, s2));
	printf("ft_strcmp: %d ", ft_strcmp(s1, s2));
	*/
	//01
	/*
	char s1[] = "Martin";
	char s2[] = "Rice";
	printf("standard c function: %d ", strncmp(s1, s2, 3));
	printf("ft_strcmp: %d ", ft_strncmp(s1, s2, 3));
	*/
	//02
	/*
	char s1[] = "Very";
	char s2[] = "Funny";
	char s3[] = "Very";
	char s4[] = "Funny";
	printf("standard c function: %s ", strcat(s1, s2));
	printf("\nft_strcat: %s ", ft_strcat(s3, s4));
	*/
	//03
	/*
	char s1[] = "This";
	char s2[] = "Is";
	char s3[] = "This";
	char s4[] = "Is";
	printf("standard c function: %s ", strncat(s1, s2, 2));
	printf("\nft_strncat: %s ", ft_strncat(s3, s4, 2));
	*/
	//04
	/*
	char s1[] = "Thisis";
	char s2[] = "his";
	printf("my: %s ", ft_strstr(s1, s2));
	printf("standard c function: %s ", strstr(s1, s2));
	*/
	//05
	//error 404 not found
	return 0;
}

