# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rel-bour <rel-bour@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/13 11:37:56 by rel-bour          #+#    #+#              #
#    Updated: 2022/03/21 11:04:01 by rel-bour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = template

CC = c++

# FLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = *.cpp

all: $(NAME)

$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	@rm -rf $(NAME)

re: clean all