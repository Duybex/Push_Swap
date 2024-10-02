/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acohen <acohen@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:25:14 by acohen            #+#    #+#             */
/*   Updated: 2024/10/02 17:36:14 by acohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>


typedef struct t_node
{
	int				content;
	int				index;
	struct t_node	*next;
}					t_node;

typedef struct t_stack
{
	int		size;
	t_node	*top;
}			t_stack;

unsigned int	ft_print_pointer(void *p);
int				ft_print_hex(unsigned int num, int is_upper, int count);
int				ft_printf(const char *format, ...);
int				ft_print_unsigned(int n);
int				ft_putnbr_count(int n);
int				ft_put_unsigned(int n);
int				is_number(char *string);
int				check_dups(int *array, int size);
int				str_to_int_array(char **string, int size, int *int_array);
int				ft_atoi(const char *str);
void			*ft_calloc(size_t nmemb, size_t size);
int				ft_isdigit(int c);
t_node			*ft_lstnew(int content);
void			ft_lstadd_front(t_node **lst, t_node *new);
int				ft_lstsize(t_node *lst);
t_node			*ft_lstlast(t_node *lst);
void			ft_lstadd_back(t_node **lst, t_node *new);
void			ft_lstclear(t_node **lst, void (*del)(t_node*));
void			ft_lstdelone(t_node *lst);
// void			ft_lstiter(t_node *lst, void (*f)(void *));
// t_node			*ft_lstmap(t_node *lst, void *(*f)(void *), void (*del)(void *));
void			ft_bzero(void *s, size_t n);
void			ft_putchar_fd(char c, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *str, int fd);
size_t			ft_strlen(const char *str);
void			*ft_memset(void *s, int c, size_t n);
void			array_to_stack(int *array, int size, t_stack *stack);
void			print_node(t_node *node);
void			print_stack(t_stack *stack);
void			ini_stacks(t_stack *a, t_stack *b);
void			free_all(t_stack *a, t_stack *b);
void			sa(t_stack *a);
void			sb(t_stack *b);
void			ss(t_stack *a, t_stack *b);
void			pa(t_stack *a, t_stack *b);
void			pb(t_stack *a, t_stack *b);
void			ra(t_stack *a);
void			rb(t_stack *b);
void			rr(t_stack *a, t_stack *b);
void			rra(t_stack *a);
void			rrb(t_stack *b);
void			rrr(t_stack *a, t_stack *b);
t_node			*ft_lstonetolast(t_node *lst);
void			indexing(t_stack *a);
int				find_unindexed_min(t_stack *a);
void			write_index(t_stack *a, int min, int i);

#endif