# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    srcs.mk                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 18:43:24 by mde-jesu          #+#    #+#              #
#    Updated: 2017/11/10 19:24:33 by mde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PRINTF :=		ft_printf.c \
				ft_printf_fd.c \
				ft_vprintf.c \
				ft_vprintf_fd.c
#				ft_printf_nul.c

OBJ := $(OBJ) $(PRINTF:.c=.o)

$(DIROBJ)/%.o: $(DIR_SRCS)/printf/%.c $(INC)
	@echo "[PRINTF] $< TO $@"
	@$(CC) $(CFLAGS) -o $@ -c $< $(INCDIR)
