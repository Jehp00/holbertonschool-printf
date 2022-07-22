NAME := fun.c _printf.c fun_num.c notation_b.c fun_not.c fun_hex.c fun_write.c fun_X.c
CC := gcc
DEBUGGER := gdb
LEAK_CHECK:= valgrind
CFLAGS := -g gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format
VFLAGS := --leak-check=full --track-origins=yes
MAIN := main.c
DMAIN := ./tests/
SRC := *.c
RM=rm

betty:
	@betty $(SRC) \
	&& betty *.h

build:
	@betty $(SRC) \
	&& betty *.h  \
	&& $(CC) $(CFLAGS) $(DMAIN)$(MAIN) $(SRC) -o $(NAME)

run:
	@betty $(SRC) \
	&& betty *.h \
	&& $(CC) $(CFLAGS) $(DMAIN)$(MAIN) $(SRC) -o $(NAME) \
	&& ./$(NAME) \
	&& $(RM) -f ./$(NAME)

gdb:
	@betty $(SRC) \
	&& betty *.h \
	&& $(CC) $(CFLAGS) $(DMAIN)$(MAIN) $(SRC) -o $(NAME) \
	&& $(DEBUGGER) ./$(NAME) \
	&& $(RM) -f $(NAME)

valgrind:
	@betty $(SRC) \
	&& betty *.h \
	&& $(CC) $(CFLAGS) $(DMAIN)$(MAIN) $(SRC) -o $(NAME) \
	&& $(LEAK_CHECK) $(VFLAGS) ./$(NAME) \
	&& $(RM) -f ./$(NAME)

valgrind-q:
	@betty $(SRC) \
	&& betty *.h \
	&& $(CC) $(CFLAGS) $(DMAIN)$(MAIN) $(SRC) -o $(NAME) \
	&& $(LEAK_CHECK) --quiet $(VFLAGS) ./$(NAME) \
	&& $(RM) -f ./$(NAME)

#	--trace-children
