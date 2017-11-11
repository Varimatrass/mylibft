#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/21 18:01:32 by mde-jesu          #+#    #+#              #
#    Updated: 2017/11/11 15:51:07 by mde-jesu         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

# DIRECTORIES
SRCDIR = srcs
OBJDIR = objs
INCDIR = -I./includes

# FLAGES
CFLAGS = -Wall -Werror -Wextra -pedantic -O3

# INCLUDES SOURCES
include $(SRCDIR)/srcs.mk

# FILES PATH
OBJPATH := $(addprefix $(OBJDIR)/, $(OBJ))
INC := $(INCDIR)/libft.h

# RULES

all: $(NAME)
	@echo "ALL"

$(NAME): $(OBJPATH)
	ar -crus $@ $^
	ranlib $(NAME)

$(OBJPATH): |$(OBJDIR)

$(OBJDIR):
	@echo "MKDIR"
	mkdir $(OBJDIR)

clean:
	@echo "CLEAN"
	@rm -f $(addprefix $(OBJDIR)/, $(OBJ))

fclean: clean
	@echo "FCLEAN"
	@rm -f $(NAME)

re: fclean all
	@echo "RE"

.PHONY: clean fclean re all

# OLD NAME
#$(NAME): $(OBJPATH)
#	@echo "NAME"
#	@ar rcs $@ $^
