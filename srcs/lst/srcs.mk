# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    srcs.mk                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 19:12:52 by mde-jesu          #+#    #+#              #
#    Updated: 2017/11/11 15:43:44 by mde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LST :=		ft_lstadd.c \
			ft_lstcpy.c \
			ft_lstdel.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_lstpush.c

OBJ := $(OBJ) $(LST:.c=.o)

$(OBJDIR)/%.o: $(SRCDIR)/lst/%.c $(INC)
	@echo "[LST] $< TO $@"
	@$(CC) $(CFLAGS) -o $@ -c $< $(INCDIR)
