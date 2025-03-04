#include <stdio.h>
#include "lista.h"

int main() {
    nodo* lista = crea_nodo(3);
    lista->next = crea_nodo(5);
    lista->next->next = crea_nodo(10);
    lista->next->next->next = crea_nodo(15);

    printf("Lista originale:\n");
    stampa(lista);

    lista = rimuovi_multipli(lista, 5);

    printf("Lista dopo rimozione multipli di 5:\n");
    stampa(lista);

    return 0;
}
