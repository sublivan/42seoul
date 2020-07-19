SRCS = ./srcs/ft_putchar.c 
		./srcs/ft_swap.c 
		./srcs/ft_putstr.c 
		./srcs/ft_strlen.c 
		./srcs/ft_strcmp.c

INCS = ./includes

OBJS = ${SRCS:.c=.o} 

AR = ar
ARCRV = crv
TARGET = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all :
	${TARGET}

.c.o :
	${CC} ${CFLAGS} -I${INCS} -c $< -o ${<:.c=.o} 

claen :
	rm -f ${OBJS}

fclean :
	rm -f ${TRAGET}

re :
	fclean all

norm :
	norminette -R CheckForbiddenSourceHeader */*.[ch]


