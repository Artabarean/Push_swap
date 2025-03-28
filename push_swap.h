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

typedef struct l_list
{
	int     len;
    int     ck_count;
    int     ck_size;
    int     min;
    int     max;
    int     median;
    int     ck_min;
    int     ck_max;
    int     elements_in_ck;
    int     pushed;
    int     best_pos;
    int     largest_pos;
	int     c;
    int     i;
}	l_list;

void		free_stack(t_list *stack);
void		free_stacks(t_list *sa, t_list *sb);
void		push_to_a(t_list *src, t_list *dst);
void		rotate(t_list *stack, char name);
void	    reverse_rotate(t_list *stack, char name);
void		stack_init_from_strings(t_list *stack, char **strings);
t_list		*stack_init(int size);
l_list      *struct_init(int initializer);
int 		stack_pop(t_list *stack, int *value);
int 		stack_push(t_list *stack, int value);
void 		swap(t_list *stack);
void		tiny_sort(t_list *sa);
int			stack_is_sorted(t_list *stack);
int 		stack_is_empty(t_list *stack);
int 		stack_len(t_list *stack);
int 		verification(int argc, char **numbers, int count);
void 		push_swap(t_list *a, t_list *b);
void 		sort_small(t_list *a, t_list *b);
int 		find_smallest_position(t_list *stack);
void 		move_to_top(t_list *stack, int pos, char name);
void	    find_chunks(t_list *a, t_list *b, l_list *s);
void 		sort_chunks(t_list *a, t_list *b, l_list *s);
void 		find_min_max_median(t_list *stack, int *min, int *max, int *median);
int 		find_largest_position(t_list *stack);
int 		find_next_in_range(t_list *stack, int min_val, int max_val);
char	    **ft_split(char const *s, char c);
int	        ft_atoi(const char *nptr);
void        *ft_calloc(size_t nmemb, size_t size);
void	    ft_bzero(void *s, size_t n);
void        rotate_b(t_list *stack);
void        rotate_a(t_list *stack);
void        reverse_rotate_b(t_list *stack);
void        reverse_rotate_a(t_list *stack);
void		push_to_b(t_list *src, t_list *dst);

#endif