#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/21 18:01:32 by mde-jesu          #+#    #+#              #
#    Updated: 2016/01/29 11:02:28 by mde-jesu         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

DIR_IS = srcs_is
SRC_IS =		ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_isspace.c

DIR_LST = srcs_lst
SRC_LST =		ft_lstadd.c \
				ft_lstcpy.c \
				ft_lstdel.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstmap.c \
				ft_lstnew.c \
				ft_lstpush.c

DIR_MATH = srcs_math
SRC_MATH =		ft_pow.c \
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

DIR_MEM = srcs_mem
SRC_MEM =		ft_bzero.c \
				ft_memalloc.c \
				ft_memccpy.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memdel.c \
				ft_memmove.c \
				ft_memset.c

DIR_OTHER = srcs_other
SRC_OTHER =		ft_atoi.c \
				ft_get_size.c \
				ft_itoa.c \
				ft_tolower.c \
				ft_toupper.c

DIR_PRINTF = srcs_printf
SRC_PRINTF =	ft_printf.c \
				ft_printf_fd.c \
				ft_vprintf.c \
				ft_vprintf_fd.c
#				ft_printf_nul.c

DIR_PUT = srcs_put
SRC_PUT =		ft_putchar.c \
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

DIR_STR = srcs_str
SRC_STR =		ft_strcat.c \
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

SRC_LFT_COMP =	$(addprefix $(DIR_IS)/, $(SRC_IS)) \
				$(addprefix $(DIR_LST)/, $(SRC_LST)) \
				$(addprefix $(DIR_MATH)/, $(SRC_MATH)) \
				$(addprefix $(DIR_MEM)/, $(SRC_MEM)) \
				$(addprefix $(DIR_OTHER)/, $(SRC_OTHER)) \
				$(addprefix $(DIR_PRINTF)/, $(SRC_PRINTF)) \
				$(addprefix $(DIR_PUT)/, $(SRC_PUT)) \
				$(addprefix $(DIR_STR)/, $(SRC_STR))

DIR_GNL = srcs_gnl
SRC_GNL =		get_next_line.c \
				ft_get_next.c

SRC_GNL_COMP =	$(addprefix $(DIR_GNL)/, $(SRC_GNL))

SRCS = $(SRC_IS) $(SRC_LST) $(SRC_MATH) $(SRC_MEM) $(SRC_OTHER) $(SRC_PRINTF) $(SRC_PUT) $(SRC_STR) $(SRC_GNL)
SRCS_COMP = $(SRC_LFT_COMP) $(SRC_GNL_COMP)

OBJDIR = ./objs
INCDIR = -I./includes

CFLAGS = -Wall -Werror -Wextra -O3

OBJS = $(SRCS:.c=.o)
OBJS_PREF = $(addprefix $(OBJDIR)/, $(OBJS))

all: $(OBJDIR) $(NAME)
	@echo "MAKE"

$(OBJDIR):
	@echo "MKDIR"
	mkdir $(OBJDIR)

$(NAME): $(OBJS_PREF)
	@echo "NAME"
	@ar rcs $@ $^

$(OBJDIR)/%.o: $(DIR_IS)/%.c
	@echo "[IS] $< TO $@"
	@$(CC) -o $@ -c $< $(CFLAGS) $(INCDIR)

$(OBJDIR)/%.o: $(DIR_LST)/%.c
	@echo "[LST] $< TO $@"
	@$(CC) -o $@ -c $< $(CFLAGS) $(INCDIR)

$(OBJDIR)/%.o: $(DIR_MATH)/%.c
	@echo "[MATH] $< TO $@"
	@$(CC) -o $@ -c $< $(CFLAGS) $(INCDIR)

$(OBJDIR)/%.o: $(DIR_MEM)/%.c
	@echo "[MEM] $< TO $@"
	@$(CC) -o $@ -c $< $(CFLAGS) $(INCDIR)

$(OBJDIR)/%.o: $(DIR_OTHER)/%.c
	@echo "[OTHER] $< TO $@"
	@$(CC) -o $@ -c $< $(CFLAGS) $(INCDIR)

$(OBJDIR)/%.o: $(DIR_PRINTF)/%.c
	@echo "[PRINTF] $< TO $@"
	@$(CC) -o $@ -c $< $(CFLAGS) $(INCDIR)

$(OBJDIR)/%.o: $(DIR_PUT)/%.c
	@echo "[PUT] $< TO $@"
	@$(CC) -o $@ -c $< $(CFLAGS) $(INCDIR)

$(OBJDIR)/%.o: $(DIR_STR)/%.c
	@echo "[STR] $< TO $@"
	@$(CC) -o $@ -c $< $(CFLAGS) $(INCDIR)

$(OBJDIR)/%.o: $(DIR_GNL)/%.c
	@echo "[GNL] $< TO $@"
	@$(CC) -o $@ -c $< $(CFLAGS) $(INCDIR)

clean:
	@echo "CLEAN"
	@rm -f $(OBJS_PREF)

fclean: clean
	@echo "FCLEAN"
	@rm -f $(NAME)

re: fclean all
	@echo "RE"

.PHONY: clean fclean re all
