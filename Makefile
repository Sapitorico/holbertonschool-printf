CC= gcc
RM=rm -f
SRC= *.c
NAME= printf
CFLAGS= -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format
compil:
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)
clean: 
	$(RM) $(NAME)
run: $(NAME)
	./$(NAME)
re: clean all
all: compil run
