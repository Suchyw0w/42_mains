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
