#ifndef LISTA_H
#define LISTA_H

typedef struct nodo {
    int dato;
    struct nodo* next;
} nodo;

nodo* inserisci_ordinato(nodo* L, nodo* nuovo);
nodo* crea_nodo(int val);
void stampa(nodo* L);

#endif
