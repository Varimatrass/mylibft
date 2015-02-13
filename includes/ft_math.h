/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-jesu <mde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/13 18:03:19 by mde-jesu          #+#    #+#             */
/*   Updated: 2015/02/13 18:03:20 by mde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# include "libft.h"

# define ABS(X)     (((X) < 0) ? (-1 * (X)) : (X))
# define FMOD(N, D) ((N) - ((int)((N) / (D))) * (D))

typedef struct	s_vec3
{
	int		x;
	int		y;
	int		z;
}				t_vec3;

typedef struct	s_vec2
{
	int		x;
	int		y;
}				t_vec2;

typedef struct	s_vec3d
{
	double	x;
	double	y;
	double	z;
}				t_vec3d;

typedef struct	s_vec2d
{
	double	x;
	double	y;
}				t_vec2d;

int				ft_pow(int a, unsigned int n);
t_uint			ft_sqrt(t_uint n);
double			ft_sqrt_d(t_uint n);

double			ft_trunc(double d, t_uint p);
int				ft_round(double d);

//double			ft_sin(double d);
//double			ft_cos(double d);
//double			ft_tan(double d);

void			set_vec2d(t_vec2d *vec, double x, double y);
void			set_vec3(t_vec3 *vec, int x, int y, int z);
void			set_vec3d(t_vec3d *vec, double x, double y, double z);
t_bool			vec2d_cmp(const t_vec2d *vec1, const t_vec2d *vec2);
t_bool			vec3_cmp(const t_vec3 *vec1, const t_vec3 *vec2);
t_bool			vec3d_cmp(const t_vec3d *vec1, const t_vec3d *vec2);

#endif
