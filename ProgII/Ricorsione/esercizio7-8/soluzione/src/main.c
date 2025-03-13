#include <stdio.h>
#include "ricorsione.h"

int main() {

    //ricerca_binaria

    int arr[] = {1, 3, 5, 7, 9};
    int valore;
    printf("Inserisci il numero da cercare: ");
    scanf("%d", &valore);

    int risultato_ricerca = ricerca_binaria(arr, 0, 4, valore);
    if (risultato_ricerca != -1) {
        printf("Elemento trovato all'indice %d.", risultato_ricerca);
    } else {
        printf("Elemento non trovato.\n");
    }

    //Fibonacci


    int n;
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &n);

    int risultato_fibonacci = fibonacci(n);
    printf("Il %d-esimo numero della sequenza di Fibonacci è: %d\n", n, risultato_fibonacci);

    return 0;
}
