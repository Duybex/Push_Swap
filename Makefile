# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acohen <acohen@student.42berlin.de>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/23 23:37:04 by acohen            #+#    #+#              #
#    Updated: 2024/10/01 17:19:56 by acohen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Werror -Wall -Wextra
SRC = push_swap.c utilities.c utilities2.c errors.c ft_atoi.c ft_calloc.c ft_isdigit.c ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c ft_printf.c ft_memset.c utilities_printf.c utilities_printf2.c ft_bzero.c ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strlen.c
OBJ = $(SRC:.c=.o)
NAME = push_swap

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(NAME) 

re: fclean
	$(MAKE) all 

.PHONY: clean fclean all re