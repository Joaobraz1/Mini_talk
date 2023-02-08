
lib = mini_talk.h
NAME = mini_talk.a
libcreation = ar rcs
libupdate = ranlib
source = /$(wildcard *.c)	
compile = gcc
rm = rm -f
flags = -Wall -Wextra -Werror

printf_Dir = ./ft_prinft
printf = libftprintf.a

objects = $(source:.c=.o)

$(NAME): 
	make -C $(printf_Dir)
	cp $(printf_Dir)/$(printf) $(NAME)
	$(libcreation) $(NAME) 
	$(libupdate) $(NAME)
	$(compile) $(flags) -o client client.c $(NAME)
	$(compile) $(flags) -o server server.c $(NAME)

.c.o:
	$(compile) -c $< -o $(<:.c=.o) 

all: $(NAME)

upserver:
	$(rm) server
	$(compile) $(flags) -o server server.c $(NAME)

upclient:
	$(rm) ./client
	$(compile) $(flags) -o client client.c $(NAME)
clean:
	$(rm) *.o
	make clean -C $(printf_Dir)
fclean: clean
	$(rm) $(NAME) server client
	make fclean -C $(printf_Dir)
re: fclean $(NAME)
