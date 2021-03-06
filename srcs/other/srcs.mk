# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    srcs.mk                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 18:43:24 by mde-jesu          #+#    #+#              #
#    Updated: 2017/11/11 15:52:32 by mde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OTHER :=		ft_atoi.c \
				ft_get_size.c \
				ft_itoa.c \
				ft_tolower.c \
				ft_toupper.c

OBJ := $(OBJ) $(OTHER:.c=.o)

$(OBJDIR)/%.o: $(SRCDIR)/other/%.c $(INC)
	@echo "[OTHER] $< TO $@"
	@$(CC) $(CFLAGS) -o $@ -c $< $(INCDIR)
