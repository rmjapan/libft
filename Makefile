NAME = libft.a
SRCS = ./*.c
OBJS = *.o


$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	cc -Wall -Wextra -Werror -c $(SRCS)


.PHONY: all
all : $(NAME)



.PHONY: clean 
clean:
	rm -f $(OBJS)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all

