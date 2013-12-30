# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nprigent <nprigent@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/22 15:43:40 by nprigent          #+#    #+#              #
#    Updated: 2013/12/30 03:01:00 by mde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
DEBUG =
LD = $(CC)
SRCDIR = ./srcs
OBJDIR = ./objs
DIR_H = ./includes

ifeq ($(DEBUG),yes)
	CC = clang
	CFLAGS = -fstack-protector-all -Wshadow -Wall -Werror -Wextra \
		-Wunreachable-code -Wstack-protector -pedantic-errors \
		-Wfatal-errors -Wstrict-prototypes -Wmissing-prototypes \
		-Wwrite-strings -Wunreachable-code -pedantic \
		-Wunknown-pragmas -Wdeclaration-after-statement \
		-Wold-style-definition -Wmissing-field-initializers \
		-Winline -g -W
else
	CC = gcc
	CFLAGS= -Wall -Wextra -Werror -O3
endif

LDFLAGS = $(CFLAGS)
SRC = $(patsubst %, $(SRCDIR)%, $(shell ls $(SRCDIR) | grep .c))

OBJS = $(SRC:.c=.o)
OBJS_PREF = $(addprefix $(OBJDIR)/, $(OBJS))

all: $(NAME)

$(NAME): $(OBJS_PREF)
	@ar rc $@ $^
	@ranlib $@

$(OBJDIR)%.o: $(SRCDIR)/%.c
	@gcc $(LDFLAGS) -c $< -o $@ -I $(DIR_H)

clean:
	@rm -rf $(OBJS_PREF)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
