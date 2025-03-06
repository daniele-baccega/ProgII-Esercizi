#include <stdio.h>
#include "lista.h"

int main() {
    nodo* lista = NULL;

    // Creiamo una lista disordinata con duplicati
    lista = inserisci_in_testa(lista, crea_nodo(5));
    lista = inserisci_in_testa(lista, crea_nodo(3));
    lista = inserisci_in_testa(lista, crea_nodo(10));
    lista = inserisci_in_testa(lista, crea_nodo(5));
    lista = inserisci_in_testa(lista, crea_nodo(15));
    lista = inserisci_in_testa(lista, crea_nodo(10));

    printf("Lista originale:");
    stampa(lista);

    lista = rimuovi_duplicati(lista);

    printf("\nLista dopo rimozione duplicati:");
    stampa(lista);

    return 0;
}
