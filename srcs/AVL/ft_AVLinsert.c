#include "libft.h"

t_avln	*ft_avlinsert(t_avlt *tree, t_avln *new)
{
	if (tree == NULL || tree->compfunc == NULL)
		return NULL;
}

/*
// 1.  Perform the normal BST insertion
if (node == NULL)
return(newNode(key));

if (key < node->key)
node->left  = insert(node->left, key);
else if (key > node->key)
node->right = insert(node->right, key);
else // Equal keys are not allowed in BST
return node;

// 2. Update height of this ancestor node
node->height = 1 + max(height(node->left),
height(node->right));

// 3. Get the balance factor of this ancestor node to check whether this node became unbalanced
int balance = getBalance(node);

If this node becomes unbalanced, then
// there are 4 cases

// Left Left Case
if (balance > 1 && key < node->left->key)
return rightRotate(node);

// Right Right Case
if (balance < -1 && key > node->right->key)
return leftRotate(node);

// Left Right Case
if (balance > 1 && key > node->left->key)
{
node->left =  leftRotate(node->left);
return rightRotate(node);

Right Left Case
if (balance < -1 && key < node->right->key)
{
node->right = rightRotate(node->right);
return leftRotate(node);
}

// return the (unchanged) node pointer
return node;
*/
