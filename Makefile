# -*- Makefile -*-

NAME = libft.a

all:
	cc -c *.c libft.h
	ar rcs $(NAME) *.o

clean:
	rm -f *.o *.out

fclean: clean
	rm -f $(NAME)
	rm -f *.a

re: fclean all
