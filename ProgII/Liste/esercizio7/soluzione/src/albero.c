#include <stdlib.h>
#include "albero.h"

nodo* crea_nodo(int dato) {
    nodo* nuovo = malloc(sizeof(nodo));
    nuovo->dato = dato;
    nuovo->left = nuovo->right = NULL;
    return nuovo;
}

int conta_foglie(nodo* T) {
    if (T == NULL) return 0;
    if (T->left == NULL && T->right == NULL) return 1;
    return conta_foglie(T->left) + conta_foglie(T->right);
}
