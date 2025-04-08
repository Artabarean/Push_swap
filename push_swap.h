#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <ctype.h>
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct t_list
{
	long	*array;
	int		size;
	int		top;
}			t_list;

typedef struct l_list
{
	int		len;
	int		ck_ct;
	int		ck_size;
	int		min;
	int		max;
	int		median;
	int		ck_min;
	int		ck_max;
	int		pushed;
	int		best_pos;
	int		c;
	int		i;
	int		min_pos;
	int		best_cost;
}			l_list;

size_t		ft_strlen(char *s);
char		*ft_remove_zeros(char *result);
int			check_max_min(long *nums, int top);
int			has_value_in_range(t_list *stack, int min_val, int max_val);
void		initialize_chunk(t_list *a, l_list *aux);
void		process_chunk_elements_optimized(t_list *a, t_list *b, l_list *aux);
void		determine_chunk_boundaries(l_list *aux);
void		process_single_element(t_list *a, t_list *b, l_list *aux);
void		push_elements_back_to_a(t_list *a, t_list *b, l_list *aux);
void		finalize_sort(t_list *a, l_list *aux);
int			ft_isdigit(int c);
int			char_search(char **numbers);
int			find_min_value(t_list *stack);
int			arguments_valid(long *array, int top);
void		sorter(t_list *a, int top, int mid, int bot);
void		sort_three(t_list *a);
void		free_stacks(t_list *sa, t_list *sb);
void		push_to_a(t_list *src, t_list *dst);
void		rotate(t_list *stack, char name);
void		reverse_rotate(t_list *stack, char name);
void		stack_init_from_strings(t_list *stack, char **strings);
t_list		*stack_init(int size);
l_list		*struct_init(int initializer);
int			stack_pop(t_list *stack);
void		stack_push(t_list *stack, long value);
void		swap_a(t_list *stack);
void		swap_b(t_list *stack);
int			stack_is_sorted(t_list *stack);
int			stack_is_empty(t_list *stack);
int			stack_len(t_list *stack);
int			push_swap(int argc, char **numbers, int count);
void		organizer(t_list *a, t_list *b);
void		sort_small(t_list *a, t_list *b);
int			find_smallest_position(t_list *stack);
void		move_to_bot(t_list *stack, int pos, char name);
int			calculate_chunk_count(int size);
int			opt_pos_in_rng(t_list *stack, int min_val, int max_val,
				l_list *aux);
void		sort_large(t_list *a, t_list *b, l_list *aux);
int			find_largest_position(t_list *stack);
char		**ft_split(char const *s, char c);
void		*ft_calloc(size_t nmemb, size_t size);
void		ft_bzero(void *s, size_t n);
void		rotate_b(t_list *stack);
void		rotate_a(t_list *stack);
void		reverse_rotate_b(t_list *stack);
void		reverse_rotate_a(t_list *stack);
void		push_to_b(t_list *src, t_list *dst);
void		find_min_max_median(t_list *stack, int *min, int *max, int *median);
long		ft_atoi_long(char *nptr);
void		optimize_small_groups(t_list *a, t_list *b);
void		sort_four(t_list *a, t_list *b);

#endif