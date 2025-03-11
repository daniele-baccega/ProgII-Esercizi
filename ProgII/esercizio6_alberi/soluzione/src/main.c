#include <stdio.h>
#include "albero.h"

int main() {
    nodo* root = crea_nodo(10);
    root->left = crea_nodo(5);
    root->right = crea_nodo(15);
    root->left->left = crea_nodo(3);
    root->left->right = crea_nodo(7);
    root->right->right = crea_nodo(20);

    printf("Numero di foglie: %d\n", conta_foglie(root));
    return 0;
}
