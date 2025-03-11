#include <stdlib.h>
#include "albero.h"

nodo* crea_nodo(int dato) {
    nodo* nuovo = malloc(sizeof(nodo));
    nuovo->dato = dato;
    nuovo->left = nuovo->right = NULL;
    return nuovo;
}

int sommaPreorder(nodo* T) {
    if (!T) return 0;
    return T->dato + sommaPreorder(T->left) + sommaPreorder(T->right);
}

int sommaInorder(nodo* T) {
    if (!T) return 0;
    return sommaInorder(T->left) + T->dato + sommaInorder(T->right);
}

int sommaPostorder(nodo* T) {
    if (!T) return 0;
    return sommaPostorder(T->left) + sommaPostorder(T->right) + T->dato;
}
