# Comandi espliciti 

gcc -c -Wall -Wextra -g -Iinclude src/studente.c -o src/studente.o
gcc -c -Wall -Wextra -g -Iinclude src/main.c -o src/main.o

gcc -Wall -Wextra -g src/studente.o src/main.o -o bin/elenco_studenti

./bin/elenco_studenti


# Comando singolo

gcc -Wall -Wextra -g -Iinclude src/studente.c src/main.c -o bin/elenco_studenti\