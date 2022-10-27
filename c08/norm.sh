#!/bin/sh
cfiles=$(find ex*/ -name "*ft*.c")
hfiles=$(find ex*/ -name "*.h")
norminette -R CheckForbiddenHeader $cfiles
norminette -R CheckDefine $hfiles
mv ex01main.c ex01/ && mv ex02main.c ex02/ && mv ex03main.c ex03/ && mv ex04main.c ex04/ && mv ex05main.c ex05/
cp ft_stock_str.h ex04/ && cp ft_stock_str.h ex05/
cc -Wextra -Wall -Werror ex01/ex01main.c
cc -Wextra -Wall -Werror ex02/ex02main.c
cc -Wextra -Wall -Werror ex03/ex03main.c
cc -Wextra -Wall -Werror ex04/ex04main.c
cc -Wextra -Wall -Werror ex05/ex05main.c
