CC =	gcc

DEBUG =	no

ifeq ($(DEBUG),yes)
	$(CFLAGS) += -g3
endif

CFLAGS =	-W -Werror -Wextra -Wall -I./include

LDFLAGS =	-Llib/my/ -lmy

SRC =	$(wildcard ./src/*.c)

OBJ =	$(SRC:.c=.o)

BIN_NAME =	bsq

all: make_lib $(BIN_NAME) $(OBJ)

make_lib:
	make -C lib/my

$(BIN_NAME): $(OBJ)
	$(CC) -o $(BIN_NAME) $(OBJ) $(LDFLAGS)
clean:
	rm -f $(OBJ)
	make clean -C lib/my

fclean: clean
	rm -f $(BIN_NAME)
	make fclean -C lib/my

re: fclean all
