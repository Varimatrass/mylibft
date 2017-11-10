# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    srcs.mk                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 18:43:24 by mde-jesu          #+#    #+#              #
#    Updated: 2017/11/10 19:21:29 by mde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MATH :=			ft_pow.c \
				ft_round.c \
				ft_set_vec2d.c \
				ft_set_vec3.c \
				ft_set_vec3d.c \
				ft_sqrt.c \
				ft_sqrt_d.c \
				ft_trunc.c \
				ft_vec2d_cmp.c \
				ft_vec3_cmp.c \
				ft_vec3d_cmp.c

OBJ := $(OBJ) $(MATH:.c=.o)

$(DIROBJ)/%.o: $(DIR_SRCS)/math/%.c $(INC)
	@echo "[MATH] $< TO $@"
	@$(CC) $(CFLAGS) -o $@ -c $< $(INCDIR)
