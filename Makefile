NAME := push_swap
SRCDIR := ./srcs/
SRCS := push.c \
		reverse_rotate.c \
		rotate.c \
		stack.c \
		stack_utils.c \
		swap.c \

SRCS := $(addprefix $(SRCDIR), $(SRCS))
OBJS := $(SRCS:.c=.o)

MAIN := push_swap.c
MAIN := $(addprefix $(SRCDIR), $(MAIN))

CC := cc
CFLAGS := -Wall -Wextra -Werror
MAKE := make
INCDIR := -I ./includes/
INCDIR_LIBFT := -I ./libft/includes/
LIBS := libft.a
RM := rm -f

.c.o:
	$(CC) $(CFLAGS) $(INCDIR) $(INCDIR_LIBFT) -c $< -o $(<:.c=.o)

$(NAME): libft.a $(OBJS) $(MAIN)
	$(CC) $(CFLAGS) $(INCDIR) $(INCDIR_LIBFT) $(OBJS) $(MAIN) $(LIBS) -o $(NAME) 

# $(OBJS): $(SRCS)
# 	$(CC) $(CFLAGS) -I $(INCDIR) $(LIBS) -c $< -o $(<:.c=.o)

libft.a:
	$(MAKE) -C ./libft
	mv libft/libft.a .

all: $(NAME)

clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) ./libft.a
	$(RM) $(NAME)

re: fclean all

bear:
	bear -- make

.PHONY: all clean fclean re libft
