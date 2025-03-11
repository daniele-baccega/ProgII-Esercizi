#ifndef ALBERO_H
#define ALBERO_H

typedef struct nodo {
    int dato;
    struct nodo* left;
    struct nodo* right;
} nodo;

nodo* crea_nodo(int dato);
int conta_foglie(nodo* T);

#endif
