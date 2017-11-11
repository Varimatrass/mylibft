# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    srcs.mk                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 18:43:24 by mde-jesu          #+#    #+#              #
#    Updated: 2017/11/11 15:52:03 by mde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PUT :=			ft_putchar.c \
				ft_putchar_fd.c \
				ft_putdouble.c \
				ft_putdouble_fd.c \
				ft_putendl.c \
				ft_putendl_fd.c \
				ft_putfstr.c \
				ft_puthexa.c \
				ft_puthexa_maj.c \
				ft_putlong.c \
				ft_putnbr.c \
				ft_putnbr_fd.c \
				ft_putoct.c \
				ft_putptr.c \
				ft_putstr.c \
				ft_putstr_fd.c \
				ft_putunbr.c

OBJ := $(OBJ) $(PUT:.c=.o)

$(OBJDIR)/%.o: $(SRCDIR)/put/%.c $(INC)
	@echo "[PUT] $< TO $@"
	@$(CC) $(CFLAGS) -o $@ -c $< $(INCDIR)
