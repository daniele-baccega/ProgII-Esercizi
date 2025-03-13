#include <stdio.h>
#include "operazione.h"

void incrementa(void* n) { (*(int*)n)++; }
void raddoppia(void* n) { (*(double*)n) *= 2; }
void maiuscolo(void* c) { if (*(char*)c >= 'a' && *(char*)c <= 'z') *(char*)c -= 32; }

int main() {
    int numeri[] = {1, 2, 3, 4, 5};
    printf("Array di interi prima: ");
    for (int i = 0; i < 5; i++) printf("%d ", numeri[i]);
    printf("\n");

    applica_a_tutti(numeri, 5, sizeof(int), incrementa);

    printf("Array di interi dopo incremento: ");
    for (int i = 0; i < 5; i++) printf("%d ", numeri[i]);
    printf("\n");

    double valori[] = {1.5, 2.5, 3.5};
    printf("Array di double prima: ");
    for (int i = 0; i < 3; i++) printf("%.2f ", valori[i]);
    printf("\n");

    applica_a_tutti(valori, 3, sizeof(double), raddoppia);

    printf("Array di double dopo raddoppio: ");
    for (int i = 0; i < 3; i++) printf("%.2f ", valori[i]);
    printf("\n");

    char lettere[] = {'a', 'b', 'c', 'd'};
    printf("Array di caratteri prima: ");
    for (int i = 0; i < 4; i++) printf("%c ", lettere[i]);
    printf("\n");

    applica_a_tutti(lettere, 4, sizeof(char), maiuscolo);

    printf("Array di caratteri dopo conversione a maiuscolo: ");
    for (int i = 0; i < 4; i++) printf("%c ", lettere[i]);
    printf("\n");

    return 0;
}
