#ifndef LISTA_H
#define LISTA_H

typedef struct nodo {
    int dato;
    struct nodo* next;
} nodo;

nodo* rimuovi_multipli(nodo* L, int x);
nodo* crea_nodo(int val);
void stampa(nodo* L);

#endif
