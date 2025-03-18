#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
typedef struct s_list
{
	int	*sa;
} t_list;
void	sa(int *sa);
void    pa(int *sa, int *sb);
void    pb(int *sa, int *sb);
void    ra(int *sa);
void    rb(int *sb);
void	rr(int *sa, int *sb);
void    rra(int *sa);
void    rrb(int *sb);
void	rrr(int *sa, int *sb);
void	ss(int *sa, int *sb);

#endif