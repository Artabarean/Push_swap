#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct t_list
{
	int	*array;
    int size;
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
    int     pushed;
    int     best_pos;
	int     c;
}	l_list;

int         ft_isdigit(int c);
int	        char_search(char **numbers);
int         find_min_value(t_list *stack);
int	        arguments_valid(int	*array, int	top);
void	    sorter(t_list *a, int top, int mid, int bot);
void        sort_three(t_list *a);
void		free_stacks(t_list *sa, t_list *sb);
void		push_to_a(t_list *src, t_list *dst);
void		rotate(t_list *stack, char name);
void	    reverse_rotate(t_list *stack, char name);
void		stack_init_from_strings(t_list *stack, char **strings);
t_list		*stack_init(int size);
l_list      *struct_init(int initializer);
int 		stack_pop(t_list *stack, int *value);
int 		stack_push(t_list *stack, int value);
void 		swap_a(t_list *stack);
void 		swap_b(t_list *stack);
int			stack_is_sorted(t_list *stack);
int 		stack_is_empty(t_list *stack);
int 		stack_len(t_list *stack);
int 		push_swap(int argc, char **numbers, int count);
void 		organizer(t_list *a, t_list *b);
void 		sort_small(t_list *a, t_list *b);
int 		find_smallest_position(t_list *stack);
void 		move_to_bot(t_list *stack, int pos, char name);
int         calculate_chunk_count(int size);
int         find_opt_pos_in_rng(t_list *stack, int min_val, int max_val);
void        sort_large(t_list *a, t_list *b, l_list *aux);
int 		find_largest_position(t_list *stack);
char	    **ft_split(char const *s, char c);
int	        ft_atoi(const char *nptr);
void        *ft_calloc(size_t nmemb, size_t size);
void	    ft_bzero(void *s, size_t n);
void        rotate_b(t_list *stack);
void        rotate_a(t_list *stack);
void        reverse_rotate_b(t_list *stack);
void        reverse_rotate_a(t_list *stack);
void		push_to_b(t_list *src, t_list *dst);
void	    find_min_max_median(t_list *stack, int *min, int *max, int *median);

#endif