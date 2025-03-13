#include "operazione.h"

void applica_a_tutti(void* array, size_t elementi, size_t size, void (*operazione)(void*)) {
    for (size_t i = 0; i < elementi; i++) {
        void* elemento = (char*)array + i * size;  // Accediamo all'elemento con aritmetica dei puntatori
        operazione(elemento);
    }
}
