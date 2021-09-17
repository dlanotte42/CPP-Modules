# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlanotte <dlanotte@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/17 18:45:37 by dlanotte          #+#    #+#              #
#    Updated: 2021/09/17 18:51:35 by dlanotte         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COLOR_OFF	= "\033[0m"       
RED			= "\033[0;31m"
YELLOW		= "\033[0;33m" 

NAME = Phonebook

CPP	= @ clang++

SRC = main.cpp

CFLAGS = -Wall -Wextra -Werror 

OBJ := ${SRC:.cpp=.o}

%.o: %.c
	@ $(CPP) $(CFLAGS) -c $< -o $@

all: $(NAME)

title:
	@ echo $(RED)"    ____  __                     __                __  "$(COLOR_OFF)
	@ echo $(RED)"   / __ \/ /_  ____  ____  ___  / /_  ____  ____  / /__"$(COLOR_OFF)
	@ echo $(RED)"  / /_/ / __ \/ __ \/ __ \/ _ \/ __ \/ __ \/ __ \/ //_/"$(COLOR_OFF)
	@ echo $(RED)" / ____/ / / / /_/ / / / /  __/ /_/ / /_/ / /_/ / ,<   "$(COLOR_OFF)
	@ echo $(RED)"/_/   /_/ /_/\____/_/ /_/\___/_.___/\____/\____/_/|_|  "$(COLOR_OFF)
                                                       
                                                     	
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