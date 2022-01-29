NAME = libft.a

SRCS = ft_isalpha.c \
		ft_itoa.c \
		ft_strnstr.c \
		ft_strtrim.c \
		ft_strlcat.c \
		ft_strmapi.c \
		ft_substr.c \
		ft_strlcpy.c \
		ft_strncmp.c \
		ft_putnbr_fd.c \
		ft_striteri.c \
		ft_tolower.c \
		ft_putendl_fd.c \
		ft_putstr_fd.c \
		ft_memmove.c \
		ft_putchar_fd.c \
		ft_strjoin.c \
		ft_calloc.c \
		ft_strlen.c \
		ft_toupper.c \
		ft_memcpy.c \
		ft_strdup.c \
		ft_atoi.c \
		ft_memcmp.c \
		ft_strchr.c \
		ft_memchr.c \
		ft_strrchr.c \
		ft_memset.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_bzero.c \
		ft_split.c 

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



NAME = libftprintf.a
SCRS = *.c
OBJS= *.o

all :
	gcc -Wall -Wextra -Werror -c $(SCRS)
	ar rc $(NAME) $(OBJS)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -rf $(NAME)