NAME = bsq
CC = gcc
CCFLAGS = -Wall -Werror -Wextra -g
SRCS = bsq.c src/math_utils.c src/print_utils.c src/str_utils.c src/two_d_arrays.c src/bsq/bsq_solver.c src/bsq/header_parser.c
OBJS = ${SRCS:.c=.o}

all: ${NAME}

.c.o: ${SRCS}
	${CC} ${CCFLAGS} -c $< -o ${<:.c=.o} -I include

${NAME}: ${OBJS}
	${CC} -o ${NAME} ${OBJS}

clean:
	rm -f grid.txt grid1.txt grid2.txt ${NAME}
	rm -f -r ${OBJS}

fclean: clean
	rm -f ${NAME}

grid:
	perl tools/generate_grid.pl 15 15 3 > grid.txt
	perl tools/generate_grid.pl 20 20 5 > grid1.txt
	perl tools/generate_grid.pl 100 100 10 > grid2.txt

.PHONY = grid run re fclean clean .c.o all
