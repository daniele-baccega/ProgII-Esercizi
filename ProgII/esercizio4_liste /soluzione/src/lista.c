#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

nodo* rimuovi_multipli(nodo* L, int x) {
    if (L == NULL) return NULL;
    L->next = rimuovi_multipli(L->next, x);
    if (L->dato % x == 0) {
        nodo* tmp = L;
        L = L->next;
        free(tmp);
    }
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
