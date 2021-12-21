# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hlahyani <hlahyani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/04 15:33:29 by hlahyani          #+#    #+#              #
#    Updated: 2021/12/05 01:57:26 by hlahyani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = 	ft_handle_u.c \
		ft_print_address.c \
	   	ft_print_low_hexa.c \
	   	ft_print_upper_hexa.c \
	   	ft_printf.c \
	   	ft_putchar.c \
	   	ft_putnbr.c \
	   	ft_putstr.c \

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ) 

clean:
	rm -rf $(OBJ)
	
fclean: clean
	rm -rf $(NAME)

re: fclean all

