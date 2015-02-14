#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/21 18:01:32 by mde-jesu          #+#    #+#              #
#    Updated: 2015/02/13 09:44:23 by mde-jesu         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
SRC_FT =	ft_array_1.c \
			ft_array_2.c \
			ft_array_3.c \
			ft_atoi.c \
			ft_bzero.c \
			ft_config.c \
			ft_double.c \
			ft_error.c \
			ft_get_size.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_isspace.c \
			ft_itoa.c \
			ft_lstadd.c \
			ft_lstcpy.c \
			ft_lstdel.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_lstpush.c \
			ft_malloc.c \
			ft_math.c \
			ft_memalloc.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memdel.c \
			ft_memmove.c \
			ft_memset.c \
			ft_printf.c \
			ft_printf_fd.c \
			ft_putchar.c \
			ft_putchar_fd.c \
			ft_putdouble.c \
			ft_putdouble_fd.c \
			ft_putendl.c \
			ft_putendl_fd.c \
			ft_putfstr.c \
			ft_puthexa.c \
			ft_puthexa_maj.c \
			ft_putint_base.c \
			ft_putlong.c \
			ft_putnbr.c \
			ft_putnbr_fd.c \
			ft_putoct.c \
			ft_putptr.c \
			ft_putstr.c \
			ft_putstr_fd.c \
			ft_putunbr.c \
			ft_strcat.c \
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
			ft_strsplitstr.c \
			ft_strstr.c \
			ft_strsub.c \
			ft_strtrim.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_vec2d.c \
			ft_vec3.c \
			ft_vec3d.c \
			ft_vprintf.c \
			ft_vprintf_fd.c

SRC_GNL = get_next_line.c \
	ft_get_next.c

SRC = $(SRC_FT) $(SRC_GNL)

SRCDIR = ./srcs
OBJDIR = ./objs
INCDIR = -I./includes

CFLAGS = -Wall -Werror -Wextra

ifeq ($(W),)
	CC = gcc
	CFLAGS += -O3
else
	CC = clang
	CFLAGS += -ggdb3 -fstack-protector-all -Wshadow -Wunreachable-code \
			-Wstack-protector -pedantic-errors -O0 -W -Wundef -fno-common \
			-Wfatal-errors -Wstrict-prototypes -Wmissing-prototypes -pedantic \
			-Wwrite-strings -Wunknown-pragmas -Wdeclaration-after-statement \
			-Wold-style-definition -Wmissing-field-initializers -Wfloat-equal \
			-Wpointer-arith -Wnested-externs -Wstrict-overflow=5 -fno-common \
			-Wno-missing-field-initializers -Wswitch-default -Wswitch-enum \
			-Wbad-function-cast -Wredundant-decls -fno-omit-frame-pointer
endif

LD = $(CC)

OBJS = $(SRC:.c=.o)
OBJS_PREF = $(addprefix $(OBJDIR)/, $(OBJS))

all: $(OBJDIR) $(NAME)

$(OBJDIR):
	mkdir $(OBJDIR)

$(NAME): $(OBJS_PREF)
	@ar rcs $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@$(CC) -o $@ -c $< $(CFLAGS) $(INCDIR)

clean:
	@rm -f $(OBJS_PREF)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
