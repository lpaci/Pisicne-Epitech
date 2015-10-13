##
## Makefile for Makefile in /home/paci_l/Piscine/Piscine_C_J10/lib/my
## 
## Made by paci louis
## Login   <paci_l@epitech.net>
## 
## Started on  Fri Oct  9 15:58:26 2015 paci louis
## Last update Mon Oct 12 15:07:37 2015 paci louis
##

RM	= rm -f
CC	= cc
FLAG	= -o
NAME	= do-op
SRCS	= ../lib/my/my_getnbr.c \
	../lib/my/my_putchar.c \
	../lib/my/my_put_nbr.c \
	../lib/my/my_putstr.c \
	./do-op.c

OBJS	= $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(OBJS) $(FLAG) $(NAME)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
