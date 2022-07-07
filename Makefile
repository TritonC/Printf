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
	@ar -rc $(NAME) $(OBJECTS)

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY:	re clean fclean all bonus