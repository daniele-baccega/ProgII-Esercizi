
#ifndef LISTA_H
#define LISTA_H

typedef struct nodo {
    int dato;
    struct nodo* next;
} nodo;

nodo* rimuovi_duplicati(nodo* L);
nodo* crea_nodo(int val);
void stampa(nodo* L);
nodo* inserisci_in_testa(nodo* L, nodo* nuovo);  // per comodità nel main

#endif
