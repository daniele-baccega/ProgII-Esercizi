# Esercizio 11 - Applicazione di una funzione a un array con puntatori a `void`

Scrivere una funzione `applica_a_tutti(void* array, size_t elementi, size_t size, void (*operazione)(void*))` che applica una funzione generica a tutti gli elementi di un array.

- Il parametro `array` è un puntatore a `void`, quindi può riferirsi a un array di qualsiasi tipo (`int`, `double`, `char`, ecc.).
- Il parametro `elementi` indica il numero di elementi dell'array.
- Il parametro `size` indica la dimensione in byte di ogni elemento.
- Il parametro `operazione` è una funzione callback che esegue un'operazione su ogni elemento dell'array.

Esempi:
```c
void incrementa(void* n) { (*(int*)n)++; }

int numeri[] = {1, 2, 3, 4, 5};
applica_a_tutti(numeri, 5, sizeof(int), incrementa);  
// Ora numeri = {2, 3, 4, 5, 6}

Condizioni:

    La funzione deve scorrere l'array e applicare operazione a ogni elemento.
    Deve funzionare per qualsiasi tipo di array.