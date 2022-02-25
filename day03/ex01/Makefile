NAME		=	scavtrap
CC			=	c++
# CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98
SRC			=	main.cpp ClapTrap.cpp ScavTrap.cpp

all:            $(NAME)

$(NAME):	$(SRC)
			@$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
		@/bin/rm -rf $(NAME)

re:            clean all

.PHONY:        all clean