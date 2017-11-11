# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    srcs.mk                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 18:45:54 by mde-jesu          #+#    #+#              #
#    Updated: 2017/11/11 15:42:33 by mde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GNL :=			get_next_line.c \
				ft_get_next.c

OBJ := $(OBJ) $(GNL:.c=.o)

$(OBJDIR)/%.o: $(SRCDIR)/gnl/%.c $(INC)
	@echo "[GNL] $< TO $@"
	@$(CC) $(CFLAGS) -o $@ -c $< $(INCDIR)