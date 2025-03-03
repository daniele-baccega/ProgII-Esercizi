#include <stdio.h>
#include "../include/array_utils.h"

#define DIMENSIONE 10

int main() {
    int numeri[DIMENSIONE];
    
    // Inizializza l'array
    inizializza_array(numeri, DIMENSIONE);
    
    // Stampa l'array
    printf("Array: ");
    stampa_array(numeri, DIMENSIONE);
    
    // Calcola e stampa somma
    printf("Somma: %d\n", somma_array(numeri, DIMENSIONE));
    
    // Calcola e stampa media
    printf("Media: %.2f\n", media_array(numeri, DIMENSIONE));
    
    // Trova e stampa massimo e minimo
    printf("Massimo: %d\n", massimo_array(numeri, DIMENSIONE));
    printf("Minimo: %d\n", minimo_array(numeri, DIMENSIONE));
    
    return 0;
}