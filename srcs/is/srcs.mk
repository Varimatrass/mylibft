# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    srcs.mk                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 18:45:54 by mde-jesu          #+#    #+#              #
#    Updated: 2017/11/10 19:11:37 by mde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

IS :=		ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_isspace.c

OBJ := $(OBJ) $(IS:.c=.o)

$(OBJDIR)/%.o: $(DIR_SRCS)/is/%.c $(INC)
	@echo "[IS] $< TO $@"
	@$(CC) $(CFLAGS) -o $@ -c $< $(INCDIR)
