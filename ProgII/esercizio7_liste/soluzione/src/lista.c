#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

// Funzione per creare un nodo semplice
nodo* crea_nodo(int val) {
    nodo* nuovo = malloc(sizeof(nodo));
    nuovo->dato = val;
    nuovo->next = NULL;
    return nuovo;
}

// Funzione per inserire in testa (comodo per lista disordinata)
nodo* inserisci_in_testa(nodo* L, nodo* nuovo) {
    nuovo->next = L;
    return nuovo;
}

// Funzione per stampare la lista
void stampa(nodo* L) {
    while (L) {
        printf("%d -> ", L->dato);
        L = L->next;
    }
    printf("NULL\\n");
}

// Funzione per rimuovere duplicati da lista non ordinata
nodo* rimuovi_duplicati(nodo* L) {
    if (L == NULL || L->next == NULL) return L;

    nodo* corrente = L;
    while (corrente != NULL) {
        nodo* precedente = corrente;
        nodo* esplora = corrente->next;

        while (esplora != NULL) {
            if (esplora->dato == corrente->dato) {
                // Elimina nodo duplicato
                precedente->next = esplora->next;
                free(esplora);
                esplora = precedente->next;
            } else {
                precedente = esplora;
                esplora = esplora->next;
            }
        }
        corrente = corrente->next;
    }
    return L;
}
