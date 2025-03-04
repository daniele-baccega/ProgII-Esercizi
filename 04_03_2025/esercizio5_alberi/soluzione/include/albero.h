#ifndef ALBERO_H
#define ALBERO_H

typedef struct nodo {
    int dato;
    struct nodo* left;
    struct nodo* right;
} nodo;

nodo* crea_nodo(int dato);
int sommaPreorder(nodo* T);
int sommaInorder(nodo* T);
int sommaPostorder(nodo* T);

#endif
