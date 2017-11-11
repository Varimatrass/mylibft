# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    srcs.mk                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 18:43:24 by mde-jesu          #+#    #+#              #
#    Updated: 2017/11/11 15:51:45 by mde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CDLST :=		ft_cdlstadd.c \
				ft_cdlstnew.c \
				ft_cdlstdelone.c

OBJ := $(OBJ) $(CDLST:.c=.o)

$(OBJDIR)/%.o: $(SRCDIR)/cdlst/%.c $(INC)
	@echo "[CDLST] $< TO $@"
	@$(CC) $(CFLAGS) -o $@ -c $< $(INCDIR)
