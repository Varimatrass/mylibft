# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                    +:+ +:+         +:+       #
#    By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+         #
#                                                +#+#+#+#+#+   +#+             #
#    Created: 2013/11/29 09:40:24 by mde-jesu          #+#    #+#              #
#    Updated: 2017/03/02 17:11:32 by mde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= test_cdlist.c
OBJ		= $(SRC:.c=.o)
LIB		= ..
INCL	= ../includes
CMP		= cc
LBFLAG	= -lft
FLAGS	= -Wall -Wextra -O0 -g -std=c11
NAME	= test

.PHONY: clean fclean re ft_otool ft_nm

all: $(NAME)

$(NAME): $(OBJ)
	@(cd $(LIB) && $(MAKE))
	$(CMP) -o $(NAME) $(FLAGS) -I./../includes -L./.. $(LBFLAG) $(SRC) $(OBJ)

%.o: %.c
	$(CMP) -I $(INCL) -o $@ -c $? $(FLAGS)

clean:
	@(cd $(LIB) && $(MAKE) $@)
	@rm -f $(OBJ)

fclean: clean
	@(cd $(LIB) && $(MAKE) $@)
	@rm -f $(NAME)

re: fclean all
