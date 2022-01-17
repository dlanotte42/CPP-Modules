# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/17 22:31:45 by dlanotte          #+#    #+#              #
#    Updated: 2022/01/17 22:40:23 by dlanotte         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COLOR_OFF	= "\033[0m"       
RED			= "\033[0;31m"
YELLOW		= "\033[0;33m" 

NAME = account

CXX	= @ clang++

SRC = account.cpp

CXXFLAGS = -Wall -Wextra -Werror 

OBJ := ${SRC:.cpp=.o}

%.o: %.c
	@ $(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

title:
	@ echo $(RED)"     _                             _   "$(COLOR_OFF)
	@ echo $(RED)"    / \   ___ ___ ___  _   _ _ __ | |_ "$(COLOR_OFF)
	@ echo $(RED)"   / _ \ / __/ __/ _ \| | | | '_ \| __|"$(COLOR_OFF)
	@ echo $(RED)"  / ___ \ (_| (_| (_) | |_| | | | | |_ "$(COLOR_OFF)
	@ echo $(RED)" /_/   \_\___\___\___/ \__,_|_| |_|\__|"$(COLOR_OFF)     

$(NAME): $(OBJ) title
	@ $(CXX) $(OBJ) -o $@
	@ echo $(YELLOW)"⚒ make completed."$(COLOR_OFF)

clean: title
	@ rm -f ${OBJ}
	@ echo $(RED)" ⚒ clean completed."$(COLOR_OFF)

fclean: clean title
	@ rm -f $(NAME)
	@ rm -f ${OBJ}
	@ rm -dir -f *.dSYM
	@ find . -name ".DS_Store" -delete
	@ echo $(YELLOW)"⚒ fclean completed."$(COLOR_OFF)

re: fclean all

.PHONY: all clean fclean re 