#include "ricorsione.h"

int ricerca_binaria(int arr[], int sinistra, int destra, int valore) {
    if (sinistra > destra) return -1;

    int metà = (sinistra + destra) / 2;
    if (arr[metà] == valore) return metà;
    if (valore < arr[metà]) return ricerca_binaria(arr, sinistra, metà - 1, valore);
    return ricerca_binaria(arr, metà + 1, destra, valore);
}
