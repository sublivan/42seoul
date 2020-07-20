SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

INCS = includes

TARGET = libft.a

OBJS = ${SRCS:.c=.o} 

AR = ar
ARCRS = crs

CC = gcc
CFLAGS = -Wall -Wextra -Werror

RM = rm -f

.c.o : 
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${TARGET} : ${OBJS}
	${AR} ${ARCRS} ${TARGET} ${OBJS}

all : ${TARGET}

clean : 
	${RM} ${OBJS}

fclean : clean
	${RM} ${TARGET}

re : fclean all

norm : 
	norminette -R CheckForbiddenSourceHeader */*.[ch]

.PHONY: all clean fclean re .c.o norm
