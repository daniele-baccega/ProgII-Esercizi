OperazioniArray/
├── array_utils.h
├── array_utils.c
└── main.c


# Compila i singoli file oggetto
gcc -c src/array_utils.c -o bin/array_utils.o
gcc -c src/main.c -o bin/main.o

# Collega i file oggetto per creare l'eseguibile
gcc bin/array_utils.o bin/main.o -o bin/operazioni_array
