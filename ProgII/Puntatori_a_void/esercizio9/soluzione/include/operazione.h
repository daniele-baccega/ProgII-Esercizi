#ifndef OPERAZIONE_H
#define OPERAZIONE_H

#include <stddef.h>  // Per size_t

void applica_a_tutti(void* array, size_t elementi, size_t size, void (*operazione)(void*));

#endif
