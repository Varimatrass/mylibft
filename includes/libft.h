/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 09:58:43 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/13 09:56:07 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

# ifndef NULL
#  define NULL ((void *)0)
# endif

# ifndef STDIN
#  define STDIN  0
# endif
# ifndef STDOOUT
#  define STDOUT 1
# endif
# ifndef STDERR
#  define STDERR 2
# endif

# define TRUE  1
# define FALSE 0

# define NAF   3

# define PTR  2
# define LOOP 4

# define LOAD_FACTOR 0.75

typedef unsigned char	t_bool;
typedef unsigned int	t_flags;
typedef unsigned int	t_uint;

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

/*
** first part
*/
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *s1, const void *s2, size_t n);
void				*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void				*ft_memmove(void *s1, const void *s2, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *s1, const char *s2);
char				*ft_strncpy(char *s1, const char *s2, size_t n);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);

/*
** seconde part (!put)
*/
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);

/*
** seconde part (put)
*/
size_t				ft_putchar(char c);
size_t				ft_putstr(char const *s);
size_t				ft_putendl(char const *s);
size_t				ft_putnbr(int n);

/*
** seconde part (put_fd)
*/
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);

/*
** put bonus
*/
size_t				ft_putunbr(unsigned int n);
size_t				ft_putlong(long l);
size_t				ft_putoct(unsigned int n);
size_t				ft_puthexa(unsigned int n);
size_t				ft_puthexa_maj(unsigned int n);
size_t				ft_putptr(unsigned long n);

/*
** lst base bonus
*/
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

/*
** lst bonus++
*/
t_list				*ft_lstpush(t_list *list, t_list *new);
t_list				*ft_lstcpy(t_list *lst);

/*
** -------------------------- other bonus -----------------------------------
** for manipulate str
*/
int					ft_strnlen(const char *s, char c);
size_t				ft_strclen(const char *s, char c);
char				*ft_strchar(const char *s1, const char *s2);
char				*ft_strcharstr(const char *s1, const char *s2);
char				*ft_strjoinf(char *s1, char *s2, t_flags flag);
char				*ft_strnjoinf(char *s1, char *s2,
						size_t n, unsigned int flag);
char				*ft_strnjoin(const char *s1, const char *s2, size_t n);
char				*ft_strndup(const char *s, size_t n);
t_array				*ft_strsplitstr(const char *s, const char *s1);

/*
** for use malloc simplie
*/
void				*ft_malloc(size_t size);

/*
** for test char
*/
int					ft_isspace(int c);

/*
** for test number
*/
size_t				ft_get_size(int n);

/*
** for put all things
*/
int					ft_putuint_base(unsigned int n, unsigned int base);
int					ft_putuint_base_l(unsigned int n, unsigned int base);
void				ft_putfstr(const char *s1, const void *arg);
void				ft_putdouble(double d);
void				ft_putdouble_fd(double d, int fd);
void				ft_printf(const char *s, ...);
void				ft_printf_fd(int fd, const char *s, ...);
void				ft_vprintf(const char *s, va_list ap);
void				ft_vprintf_fd(int fd, const char *s, va_list ap);

/*
** get_next as get_next_line but choose char limiter
*/
int					ft_get_next(const int fd, char **line, char c);

/*
** get things for sh
*/
char				*get_env(const char *name);
char				*get_path(int index);

#endif
