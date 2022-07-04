NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra -g

FUNCTIONS = ft_putnbr_base.c \
			printf_utils.c \
			ft_printf.c \
			

OBJECTS = $(FUNCTIONS:.c=.o)

#BONUS = ft_lstmap_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstnew_bonus.c

#OBJECTS_BONUS = $(BONUS:.c=.o);

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rc $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS) $(OBJECTS_BONUS)

fclean: clean
	rm -f $(NAME) $(OBJECTS_BONUS)

re: fclean all

#bonus:
#	make "OBJECTS=$(OBJECTS_BONUS)"

.PHONY:	re clean fclean all bonus