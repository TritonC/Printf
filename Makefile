NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

FUNCTIONS = ft_putnbr_base.c \
			printf_utils.c \
			ft_printf.c \
			ft_utils.c \
			

OBJECTS = $(FUNCTIONS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rc $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS) $(OBJECTS_BONUS)

fclean: clean
	rm -f $(NAME) $(OBJECTS_BONUS)

re: fclean all

.PHONY:	re clean fclean all bonus