#include "binary_trees.h"

/**
 * binary_tree_balance - Calculates the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree.
 * Return: Balance factor of the tree.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
    int l_height = 0, r_height = 0;

    if (tree == NULL)
    {
        return (0);
    }
    
    if (tree->left)
    {
        l_height = 1 + binary_tree_balance(tree->left);
    }
    if (tree->right)
    {
        r_height = 1 + binary_tree_balance(tree->right);
    }

    return (l_height - r_height);
}
