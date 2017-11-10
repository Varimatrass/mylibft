#include "libft.h"

t_avln	*ft_avlrightrot(t_avln *x)
{
	t_avln *y;
	t_avln *z;

	*y = x->left;
	*z = y->right;
	y->right = x;
	x->left = z;
	x->height = ft_intmax(height(x->left), height(x->right))+1;
	y->height = ft_intmax(height(y->left), height(y->right))+1;
	return y;
}
