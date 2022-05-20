NAME := push_swap

SRCS := $(wildcard *.c)
OBJS := $(SRCS:.c=.o)

CC := gcc
CFLAGS := -g

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

test: $(NAME)
	./push_swap

clean:
	rm -f $(NAME) $(OBJS)

.PHONY: clean test