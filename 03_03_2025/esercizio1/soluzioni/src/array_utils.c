#include <stdio.h>
#include "../include/array_utils.h"

// Stampa tutti gli elementi dell'array
void stampa_array(int array[], int dimensione) {
    for (int i = 0; i < dimensione; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Calcola la somma di tutti gli elementi
int somma_array(int array[], int dimensione) {
    int somma = 0;
    for (int i = 0; i < dimensione; i++) {
        somma += array[i];
    }
    return somma;
}

// Calcola la media degli elementi
float media_array(int array[], int dimensione) {
    if (dimensione == 0) {
        return 0.0;  // Evita la divisione per zero
    }
    
    int somma = somma_array(array, dimensione);
    return (float)somma / dimensione;
}

// Trova il valore massimo nell'array
int massimo_array(int array[], int dimensione) {
    if (dimensione == 0) {
        return 0;  // Caso array vuoto
    }
    
    int max = array[0];
    for (int i = 1; i < dimensione; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

// Trova il valore minimo nell'array
int minimo_array(int array[], int dimensione) {
    if (dimensione == 0) {
        return 0;  // Caso array vuoto
    }
    
    int min = array[0];
    for (int i = 1; i < dimensione; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

// Inizializza l'array con valori da 0 a dimensione-1
void inizializza_array(int array[], int dimensione) {
    for (int i = 0; i < dimensione; i++) {
        array[i] = i;
    }
}