#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct t_list
{
	int	*array;
	int	size;
	int	top;
}  t_list;

void	_sa(t_list *stack);
void	_sb(int *sb);
void    pa(int *sa, int *sb);
void    pb(t_list *src, t_list *dst);
void    ra(t_list *stack);
void    rb(int *sb);
void	rr(int *sa, int *sb);
void    rra(int *sa);
void    rrb(int *sb);
void	rrr(int *sa, int *sb);
void	ss(int *sa, int *sb);
int		intarray_len(int	*s);
int		intarray_sorted(int	*s);
int *intarray_init(int *s, char **argv);

#endif