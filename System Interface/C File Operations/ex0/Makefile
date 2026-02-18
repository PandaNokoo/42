GCC	= gcc
CFLAGS	= -Wall -Wextra -Werror
RM	= rm -f

NAME	= ft_display_file

SRCS	= ft_display_file.c \

OBJS	= ${SRCS:.c=.o}

all:	${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	 ${CC} ${CFLAGS} -o $@ ${OBJS}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
