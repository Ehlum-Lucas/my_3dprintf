##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##

NAME		=		libmy_3dprintf.a

MYH			=		my_3dprintf.h \

SRC			=       my_3dprintf.c  \
					letters.c

CFLAGS      +=         -I . -Wall -Wextra -pedantic \
					   -Wstrict-prototypes \
					   -Wold-style-definition -fstack-protector -std=c99

OBJ			=		$(SRC:.c=.o)

SRC_COUNT    :=         $(words $(SRC))

NB           =         0

RM			=		rm -f

ECHO		=		/bin/echo -e
DEFAULT		=		"\033[00m"
BOLD		=		"\e[1m"
RED			=		"\e[31m"
GREEN		=		"\e[32m"
LIGHT_BLUE	=		"\e[94m"
WHITE		=		"\e[1;37m"

all:	$(NAME)

$(NAME):		$(OBJ)
			@(ar rc $(NAME) *.o)
			@(mv $(NAME) ../)
			@(cp $(MYH) ../../include/)
			@($(ECHO) " ")
			@($(ECHO) $(BOLD) $(GREEN)✓$(LIGHT_BLUE) \
			"Lib 'my3dprintf' sucessfully build. "$(DEFAULT))

clean:
			@($(RM) $(NAME))
			@($(RM) $(OBJ))
			@($(ECHO) $(BOLD) $(GREEN)✓$(LIGHT_BLUE) \
			"Clean lib 'my3dprintf'"$(DEFAULT))

fclean:		clean
			@($(RM) ../$(NAME))
			@($(ECHO) $(BOLD) $(GREEN)✓$(LIGHT_BLUE) \
			"Fclean lib 'my3dprintf'"$(DEFAULT))

re:		fclean all

debug:	CFLAGS += -g3 -pg
debug:	re
			@gcc -o $(NAME) $(OBJ) $(INCLUDE) $(LDFLAGS) \
			&& $(ECHO) $(BOLD) $(GREEN)"► BUILD SUCCESS !"$(DEFAULT) \
			|| ($(ECHO) $(BOLD) $(RED)"► BUILD FAILED"$(DEFAULT) && exit 1)

%.o:		%.c
			@$(eval NB=$(shell echo $$(($(NB)+1))))
			@gcc -c -o $@ $^ $(CFLAGS) \
			&& python3 ../../build/build.py $< $(NB) $(SRC_COUNT)

.PHONY: all clean fclean re
