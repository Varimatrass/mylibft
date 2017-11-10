# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    srcs.mk                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 18:43:24 by mde-jesu          #+#    #+#              #
#    Updated: 2017/11/10 19:12:33 by mde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

AVL	:=	ft_AVLinsert.c \
		ft_AVLleftrot.c \
		ft_AVLnewnode.c \
		ft_AVLnewtree.c \
		ft_AVLrightrot.c

OBJ := $(OBJ) $(AVL:.c=.o)

$(DIROBJ)/%.o: $(DIR_SRCS)/AVL/%.c $(INC)
	@echo "[AVL] $< TO $@"
	@$(CC) $(CFLAGS) -o $@ -c $< $(INCDIR)
