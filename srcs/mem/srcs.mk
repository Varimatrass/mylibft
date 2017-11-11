# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    srcs.mk                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 18:43:24 by mde-jesu          #+#    #+#              #
#    Updated: 2017/11/11 15:51:53 by mde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MEM :=			ft_bzero.c \
				ft_memalloc.c \
				ft_memccpy.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memdel.c \
				ft_memmove.c \
				ft_memset.c

OBJ := $(OBJ) $(MEM:.c=.o)

$(OBJDIR)/%.o: $(SRCDIR)/mem/%.c $(INC)
	@echo "[MEM] $< TO $@"
	@$(CC) $(CFLAGS) -o $@ -c $< $(INCDIR)
