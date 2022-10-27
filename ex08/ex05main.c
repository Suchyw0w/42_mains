#include <unistd.h>
#include "ex05/ft_show_tab.c"
#include "ex05/ft_stock_str.h"
#include "./ex04/ft_strs_to_tab.c"

int	main(int argc, char **argv)
{
	ft_show_tab(ft_strs_to_tab(argc, argv));
}
