# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/17 16:42:13 by dlanotte          #+#    #+#              #
#    Updated: 2021/09/17 18:33:57 by dlanotte         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COLOR_OFF	= "\033[0m"       
RED			= "\033[0;31m"
YELLOW		= "\033[0;33m" 

NAME = megaphone

CPP	= @ clang++

SRC = megaphone.cpp

CFLAGS = -Wall -Wextra -Werror 

OBJ := ${SRC:.cpp=.o}

%.o: %.c
	@ $(CPP) $(CFLAGS) -c $< -o $@

all: $(NAME)

title:
	@ echo $(RED)"    _   _                                                   "$(COLOR_OFF)
	@ echo $(RED)"    /  /|                              /                    "$(COLOR_OFF)
	@ echo $(RED)"---/| /-|----__----__----__------__---/__----__----__----__-"$(COLOR_OFF)
	@ echo $(RED)"  / |/  |  /___) /   ) /   )   /   ) /   ) /   ) /   ) /___)"$(COLOR_OFF)
	@ echo $(RED)"_/__/___|_(___ _(___/_(___(___/___/_/___/_(___/_/___/_(___ _"$(COLOR_OFF)
	@ echo $(RED)"                   /         /                              "$(COLOR_OFF)
	@ echo $(RED)"               (_ /         /                               "$(COLOR_OFF)

$(NAME): $(OBJ) title
	@ $(CPP) $(OBJ) -o $@
	@ echo $(YELLOW)"⚒ make completed."$(COLOR_OFF)

clean: title
	@ rm -f ${OBJ}
	@ echo $(YELLOW)"⚒ clean completed."$(COLOR_OFF)

fclean: clean title
	@ rm -f $(NAME)
	@ rm -f ${OBJ}
	@ rm -dir -f *.dSYM
	@ find . -name ".DS_Store" -delete
	@ echo $(RED)"⚒ fclean completed."$(COLOR_OFF)

re: fclean all

.PHONY: all clean fclean re 