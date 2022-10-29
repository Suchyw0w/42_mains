find . -name "*.c" -type f -exec cc -Wall -Werror -Wextra -c {} \;
ar cr libft.a *.o
