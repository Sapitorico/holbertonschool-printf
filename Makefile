CC= gcc
RM=rm -f
SRC= *.c
OBJ= $(SRC:%.c=%.o)
NAME= printf
CFLAGS= -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format
%.o: %.c m.h
	$(CC) -c -o $@ $<
compil:
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)
run: $(NAME)
	./$(NAME)
all: compil run
