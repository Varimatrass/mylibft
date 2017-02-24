/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 09:58:43 by mde-jesu          #+#    #+#             */
/*   Updated: 2017/02/24 22:17:19 by mde-jesu         ###   ########.fr       */
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

# ifndef TRUE
#  define TRUE  1
# endif
# ifndef FALSE
#  define FALSE 0
# endif

# ifndef NAF
#  define NAF   3
# endif

# ifndef PTR
#  define PTR  2
# endif
# ifndef LOOP
#  define LOOP 4
# endif

# ifndef LOAD_FACTOR
#  define LOAD_FACTOR 0.75
# endif

typedef unsigned char	t_bool;
typedef unsigned int	t_flags;
typedef unsigned int	t_uint;

/*
** basic list struct
*/
typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

/*
** cyclic double way list struct
*/
typedef struct		s_cdlst
{
	void			*content;
	size_t			content_size;
	struct s_lst	*next;
	struct s_lst	*prev;
}					t_cdlst;

/*
** AVL node struct
*/
typedef struct		s_avln
{
	void			*content;
	size_t			content_size;
	struct s_avln	*par;
	struct s_avln	*right;
	struct s_avln	*left;
}					t_avln;

/*
** AVL tree struct
*/
typedef struct		s_avlt
{
	t_avln			*root;
}					t_avlt;

/*
** MATH.H
*/
# define ABS(X)     (((X) < 0) ? (-1 * (X)) : (X))
# define FMOD(N, D) ((N) - ((int)((N) / (D))) * (D))

typedef struct		s_vec3
{
	int				x;
	int				y;
	int				z;
}					t_vec3;

typedef struct		s_vec2
{
	int				x;
	int				y;
}					t_vec2;

typedef struct		s_vec3d
{
	double			x;
	double			y;
	double			z;
}					t_vec3d;

typedef struct		s_vec2d
{
	double			x;
	double			y;
}					t_vec2d;

int					ft_pow(int a, unsigned int n);
t_uint				ft_sqrt(t_uint n);
double				ft_sqrt_d(t_uint n);

double				ft_trunc(double d, t_uint p);
int					ft_round(double d);

void				ft_set_vec2d(t_vec2d *vec, double x, double y);
void				ft_set_vec3(t_vec3 *vec, int x, int y, int z);
void				ft_set_vec3d(t_vec3d *vec, double x, double y, double z);
t_bool				ft_vec2d_cmp(const t_vec2d *vec1, const t_vec2d *vec2);
t_bool				ft_vec3_cmp(const t_vec3 *vec1, const t_vec3 *vec2);
t_bool				ft_vec3d_cmp(const t_vec3d *vec1, const t_vec3d *vec2);
/*
** !MATH.H
*/

/*
** is ?
*/
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_isspace(int c);

/*
** list functions
*/
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstpush(t_list *list, t_list *new);
t_list				*ft_lstcpy(t_list *lst);

/*
** double way circular list functions
*/
t_cdlst				*ft_cdlstnew(void const *content, size_t content_size);
void				ft_cdlstadd(t_cdlst **l, t_cdlst *new);
void				ft_cdlstdelone(t_cdlst **alst, void (*del)(void *, size_t));

/*
** double way circular list functions
** todo
*/
t_list				*ft_cdlstcpy(t_list *lst);
void				ft_cdlstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_cdlstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_cdlstmap(t_list *lst, t_list *(*f)(t_list *elem));

/*
** AVL tree functions
*/
t_avlt				*ft_avlnewtree(void);

/*
** For manipulate pointers
*/
void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memcpy(void *s1, const void *s2, size_t n);
void				*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void				*ft_memmove(void *s1, const void *s2, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);

/*
** For manipulate str
*/
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
int					ft_strnlen(const char *s, char c);
size_t				ft_strclen(const char *s, char c);
char				*ft_strchar(const char *s1, const char *s2);
char				*ft_strcharstr(const char *s1, const char *s2);
char				*ft_strjoinf(char *s1, char *s2, t_flags flag);
char				*ft_strnjoinf(char *s1, char *s2,
						size_t n, unsigned int flag);
char				*ft_strnjoin(const char *s1, const char *s2, size_t n);
char				*ft_strndup(const char *s, size_t n);

/*
** for put many things
*/
size_t				ft_putchar(char c);
size_t				ft_putstr(char const *s);
size_t				ft_putendl(char const *s);
size_t				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);

size_t				ft_putunbr(unsigned int n);
size_t				ft_putlong(long l);
size_t				ft_putoct(unsigned int n);
size_t				ft_puthexa(unsigned int n);
size_t				ft_puthexa_maj(unsigned int n);
size_t				ft_putptr(unsigned long n);

void				ft_putfstr(const char *s1, const void *arg);
void				ft_putdouble(double d);
void				ft_putdouble_fd(double d, int fd);

void				ft_printf(const char *s, ...);
void				ft_printf_fd(int fd, const char *s, ...);
void				ft_vprintf(const char *s, va_list ap);
void				ft_vprintf_fd(int fd, const char *s, va_list ap);

/*
** for test number
*/
size_t				ft_get_size(int n);

/*
** other
*/
int					ft_atoi(const char *str);
char				*ft_itoa(int n);
int					ft_toupper(int c);
int					ft_tolower(int c);

#endif
