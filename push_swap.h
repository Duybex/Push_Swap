/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acohen <acohen@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:25:14 by acohen            #+#    #+#             */
/*   Updated: 2024/09/25 22:01:27 by acohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>


typedef struct t_node
{
	void				*content;
	struct t_node		*next;
}						t_node;

typedef struct t_stack
{
	int				size;
	t_node			**top;
}					t_stack;

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
t_node			*ft_lstnew(void *content);
void			ft_lstadd_front(t_node **lst, t_node *new);
int				ft_lstsize(t_node *lst);
t_node			*ft_lstlast(t_node *lst);
void			ft_lstadd_back(t_node **lst, t_node *new);
void			ft_lstclear(t_node **lst, void (*del)(void*));
void			ft_lstdelone(t_node *lst, void (*del)(void*));
void			ft_lstiter(t_node *lst, void (*f)(void *));
t_node			*ft_lstmap(t_node *lst, void *(*f)(void *), void (*del)(void *));
void			ft_bzero(void *s, size_t n);
void			ft_putchar_fd(char c, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putstr_fd(char *str, int fd);
size_t			ft_strlen(const char *str);
void			*ft_memset(void *s, int c, size_t n);


#endif