
lib = libft.h
blib = blibft.h
NAME = libftprintf.a
b = b.a
libcreation = ar rcs
libupdate = ranlib
source = $(wildcard *.c)	
b_source = bbb/$(wildcard *.c)
compile = gcc
rm = rm -f
flags = -Wall -Wextra -Werror



objects = $(source:.c=.o)

b_objects = $(b_source:.c=.o)

$(b): $(b_objects)
	$(libcreation) $(b) $(b_objects)
	$(libupdate) $(b)

$(NAME): $(objects) 
	cp bbb/$(b) $(NAME)
	$(libcreation) $(NAME) $(objects)
	$(libupdate) $(NAME)

.c.o:
	$(compile) -c $< -o $(<:.c=.o) 

all: $(b_name) $(NAME) 

clean:
	$(rm) *.o 
	make clean -C  $(libft_Dir)
fclean: clean
	$(rm) $(NAME) a.out
	make fclean -C   $(libft_Dir)
re: fclean $(NAME)
