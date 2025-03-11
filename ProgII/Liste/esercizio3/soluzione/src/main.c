#include <stdio.h>
#include "lista.h"

int main() {
    nodo* lista = NULL;
    lista = inserisci_ordinato(lista, crea_nodo(10));
    lista = inserisci_ordinato(lista, crea_nodo(5));
    lista = inserisci_ordinato(lista, crea_nodo(20));
    lista = inserisci_ordinato(lista, crea_nodo(15));

    stampa(lista);
    return 0;
}
