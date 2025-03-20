#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int	*sa;
	int	sapos;
	int	*sb;
	int	sbpos;
}  t_list;
void	_sa(int *sa);
void	_sb(int *sb);
void    pa(int *sa, int *sb);
void    pb(int *sa, int *sb);
void    ra(int *sa);
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