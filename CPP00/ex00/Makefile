# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/17 16:42:13 by dlanotte          #+#    #+#              #
#    Updated: 2022/01/18 19:23:16 by dlanotte         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COLOR_OFF	= "\033[0m"       
RED			= "\033[0;31m"
YELLOW		= "\033[0;33m" 

NAME = megaphone

CXX	= @ clang++

SRC = megaphone.cpp

CXXFLAGS = -Wall -Wextra -Werror 

OBJ := ${SRC:.cpp=.o}

%.o: %.c
	@ $(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

title:
	@ echo $(RED)"    _   _                                                   "$(COLOR_OFF)
	@ echo $(RED)"    /  /|                              /                    "$(COLOR_OFF)
	@ echo $(RED)"---/| /-|----__----__----__------__---/__----__----__----__-"$(COLOR_OFF)
	@ echo $(RED)"  / |/  |  /___) /   ) /   )   /   ) /   ) /   ) /   ) /___)"$(COLOR_OFF)
	@ echo $(RED)"_/__/___|_(___ _(___/_(___(___/___/_/___/_(___/_/___/_(___ _"$(COLOR_OFF)
	@ echo $(RED)"                   /         /                              "$(COLOR_OFF)
	@ echo $(RED)"               (_ /         /                               "$(COLOR_OFF)

$(NAME): $(OBJ)
	@ make title
	@ $(CXX) $(OBJ) -o $@
	@ echo $(YELLOW)"⚒ make completed."$(COLOR_OFF)

clean: 
	@ rm -f ${OBJ}
	@ echo $(YELLOW)"⚒ clean completed."$(COLOR_OFF)

fclean: clean 
	@ rm -f $(NAME)
	@ rm -f ${OBJ}
	@ rm -dir -f *.dSYM
	@ find . -name ".DS_Store" -delete
	@ echo $(YELLOW)"⚒ fclean completed."$(COLOR_OFF)

re: fclean all

.PHONY: all clean fclean re 