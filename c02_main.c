/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c02_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osuchane <osuchane@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:28:19 by osuchane          #+#    #+#             */
/*   Updated: 2022/10/17 09:52:49 by osuchane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

//#include "ex00/ft_strcpy.c"
//#include "ex01/ft_strncpy.c"
//#include "ex02/ft_str_is_alpha.c"
//#include "ex03/ft_str_is_numeric.c"
//#include "ex04/ft_str_is_lowercase.c"
//#include "ex05/ft_str_is_uppercase.c"
//#include "ex06/ft_str_is_printable.c"
//#include "ex07/ft_strupcase.c"
//#include "ex08/ft_strlowcase.c"
//#include "ex09/ft_strcapitalize.c"
//#include "ex10/ft_strlcpy.c"
//#include "ex11/ft_putstr_non_printable.c"


int main()
{
	//00
	/*
	char src[] = "Hello";
	char dest[] = "World";
	char dest1[] = "Testing";
	printf("%s", ft_strcpy(dest, src));
	printf("\n%s", strcpy(dest1, src));
	*/
	//01
	/*
	char src[] = "Hello";
	char dest[] = "World";
	char dest1[] = "Testing";
	printf("%s", ft_strncpy(dest, src, 2));
	printf("\n%s", strncpy(dest1, src, 5));
	*/
	//02
	/*
	printf("%d", ft_str_is_alpha("Hello"));
	printf("\n%d", ft_str_is_alpha("Hel?lo"));
	printf("\n%d", ft_str_is_alpha(""));
	*/
	//03
	/*
	printf("%d", ft_str_is_numeric(""));
	printf("\n%d", ft_str_is_numeric("asd48"));
	printf("\n%d", ft_str_is_numeric("58"));
	*/
	//04
	/*
	printf("%d", ft_str_is_lowercase("whatsUP"));
	printf("\n%d", ft_str_is_lowercase(""));
	printf("\n%d", ft_str_is_lowercase("hello"));
	*/
	//05
	/*
	printf("%d", ft_str_is_uppercase("WHATSup"));
	printf("\n%d", ft_str_is_uppercase(""));
	printf("\n%d", ft_str_is_uppercase("HELLO"));
	*/
	//06
	/*
	printf("%d", ft_str_is_printable("¶something wrong¶"));
	printf("\n%d", ft_str_is_printable(""));
	printf("\n%d", ft_str_is_printable("@#this should work *,"));
	*/
	//07
	/*
	char upper[] = "TestingThisLovelyFunction";
	printf("%s", ft_strupcase(upper));
	*/
	//08
	/*
	char lower[] = "TestingThisLovelyFunction";
	printf("%s", ft_strlowcase(lower));
	*/
	//09
	/*
	char capitalize[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(capitalize));
	*/
	//10
	/*
	char x[] = "hello";
	char y[] = "world";
	printf("string to copy: %s before copy: %s\n", y, x);
	printf("len of string: %d string to copy: %s after copy: %s", ft_strlcpy(x, y, 10), y, x);
	*/
	//11
	/*
	char nonprint[] = "asdad\n";
	ft_putstr_non_printable(nonprint);
	*/
	//12
	//Error 404 not found
	return 0;
}
