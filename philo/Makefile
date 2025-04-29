CC = cc

CFLAGS = -Wall -Wextra -Werror

LDFLAGS = -lpthread

NAME = philo

SRCDIR = ./srcs

SRCS = $(wildcard $(SRCDIR)/*.c)

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $(NAME) $(OBJS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)	
re: fclean all

.PHONY: all clean fclean re
