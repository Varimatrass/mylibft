# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    srcs.mk                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 18:43:24 by mde-jesu          #+#    #+#              #
#    Updated: 2017/11/10 19:26:37 by mde-jesu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

STR :=			ft_strcat.c \
				ft_strchar.c \
				ft_strcharstr.c \
				ft_strchr.c \
				ft_strclen.c \
				ft_strclr.c \
				ft_strcmp.c \
				ft_strcpy.c \
				ft_strdel.c \
				ft_strdup.c \
				ft_strequ.c \
				ft_striter.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strjoinf.c \
				ft_strlcat.c \
				ft_strlen.c \
				ft_strmap.c \
				ft_strmapi.c \
				ft_strncat.c \
				ft_strncmp.c \
				ft_strncpy.c \
				ft_strndup.c \
				ft_strnequ.c \
				ft_strnew.c \
				ft_strnjoin.c \
				ft_strnjoinf.c \
				ft_strnlen.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strsplit.c \
				ft_strstr.c \
				ft_strsub.c \
				ft_strtrim.c

OBJ := $(OBJ) $(STR:.c=.o)

$(DIROBJ)/%.o: $(DIR_SRCS)/str/%.c $(INC)
	@echo "[STR] $< TO $@"
	@$(CC) $(CFLAGS) -o $@ -c $< $(INCDIR)
