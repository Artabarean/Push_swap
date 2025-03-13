#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# define MAX_SIZE 10
typedef struct stack
{
	int	data[MAX_SIZE];
	int	top;
}					stack;
t_list	sa_swap_a(t_list a);

#endif