NAME = megaphone
SRCS = megaphone.cpp

OBJS = $(SRCS:.c=.o)
CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

%.o: %.c
	$(CC) $(CFLAGS)  -o $@ -c $<

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

all: $(NAME)
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:
	$(MAKE) fclean
	$(MAKE)

.PHONY: all clean fclean re
