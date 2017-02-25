#include "libft.h"

t_avln	*ft_avlleftrot(t_avln *x)
{
	t_avln *y = x->right;
	t_avln *z = y->left;

	y->left = x;
	x->right = z;
	x->height = ft_intmax(height(x->left), height(x->right))+1;
	y->height = ft_intmax(height(y->left), height(y->right))+1;
	return y;
}
