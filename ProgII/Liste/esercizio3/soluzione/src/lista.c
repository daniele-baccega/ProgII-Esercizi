#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

nodo* inserisci_ordinato(nodo* L, nodo* nuovo) {
    if (L == NULL || nuovo->dato <= L->dato) {
        nuovo->next = L;
        return nuovo;
    }
    L->next = inserisci_ordinato(L->next, nuovo);
    return L;
}

nodo* crea_nodo(int val) {
    nodo* nuovo = malloc(sizeof(nodo));
    nuovo->dato = val;
    nuovo->next = NULL;
    return nuovo;
}

void stampa(nodo* L) {
    while (L) {
        printf("%d -> ", L->dato);
        L = L->next;
    }
    printf("NULL\n");
}
