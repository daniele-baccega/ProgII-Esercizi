#include "ricorsione.h"

int ricerca_binaria(int arr[], int sinistra, int destra, int valore) {
    if (sinistra > destra) return -1;

    int metà = (sinistra + destra) / 2;
    if (arr[metà] == valore) return metà;
    if (valore < arr[metà]) return ricerca_binaria(arr, sinistra, metà - 1, valore);
    return ricerca_binaria(arr, metà + 1, destra, valore);
}


int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
