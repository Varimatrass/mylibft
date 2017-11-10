#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/21 18:01:32 by mde-jesu          #+#    #+#              #
#    Updated: 2017/11/10 19:28:00 by mde-jesu         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

DIR_SRCS = srcs

DIR_CDLST = srcs_cdlst

SRC_LFT_COMP =	$(addprefix $(DIR_IS)/, $(SRC_IS)) \
				$(addprefix $(DIR_LST)/, $(SRC_LST)) \
				$(addprefix $(DIR_MATH)/, $(SRC_MATH)) \
				$(addprefix $(DIR_MEM)/, $(SRC_MEM)) \
				$(addprefix $(DIR_OTHER)/, $(SRC_OTHER)) \
				$(addprefix $(DIR_PRINTF)/, $(SRC_PRINTF)) \
				$(addprefix $(DIR_PUT)/, $(SRC_PUT)) \
				$(addprefix $(DIR_STR)/, $(SRC_STR)) \
				$(addprefix $(DIR_CDLST)/, $(SRC_CDLST))

DIR_GNL = srcs_gnl
SRC_GNL =		get_next_line.c \
				ft_get_next.c

SRC_GNL_COMP =	$(addprefix $(DIR_GNL)/, $(SRC_GNL))

SRCS = $(SRC_IS) $(SRC_LST) $(SRC_MATH) $(SRC_MEM) $(SRC_OTHER) $(SRC_PRINTF) $(SRC_PUT) $(SRC_STR) $(SRC_CDLST) $(SRC_GNL)
SRCS_COMP = $(SRC_LFT_COMP) $(SRC_GNL_COMP)

OBJDIR = ./objs
INCDIR = -I./includes

CFLAGS = -Wall -Werror -Wextra -pedantic -O3

OBJS = $(SRCS:.c=.o)
OBJS_PREF = $(addprefix $(OBJDIR)/, $(OBJS))

all: $(OBJDIR) $(NAME)
	@echo "MAKE"

$(OBJDIR):
	@echo "MKDIR"
	mkdir $(OBJDIR)

$(NAME): $(OBJS_PREF)
	@echo "NAME"
	@ar rcs $@ $^

clean:
	@echo "CLEAN"
	@rm -f $(OBJS_PREF)

fclean: clean
	@echo "FCLEAN"
	@rm -f $(NAME)

re: fclean all
	@echo "RE"

.PHONY: clean fclean re all
