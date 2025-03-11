#include <stdio.h>
#include "albero.h"

int main() {
    nodo* root = crea_nodo(10);
    root->left = crea_nodo(5);
    root->right = crea_nodo(15);
    root->left->left = crea_nodo(3);
    root->left->right = crea_nodo(7);

    printf("Somma Preorder: %d\n", sommaPreorder(root));
    printf("Somma Inorder: %d\n", sommaInorder(root));
    printf("Somma Postorder: %d\n", sommaPostorder(root));

    return 0;
}
