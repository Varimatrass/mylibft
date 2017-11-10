# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    srcs.mk                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 18:43:24 by mde-jesu          #+#    #+#              #
#    Updated: 2017/11/10 19:23:39 by mde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OTHER :=		ft_atoi.c \
				ft_get_size.c \
				ft_itoa.c \
				ft_tolower.c \
				ft_toupper.c

OBJ := $(OBJ) $(OTHER:.c=.o)

$(DIROBJ)/%.o: $(DIR_SRCS)/other/%.c $(INC)
	@echo "[OTHER] $< TO $@"
	@$(CC) $(CFLAGS) -o $@ -c $< $(INCDIR)
