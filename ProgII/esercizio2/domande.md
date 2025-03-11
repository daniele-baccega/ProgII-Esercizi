# Esercizio 2 - Struct
1. Definisci una struct studente con i seguenti campi:

- nome (stringa di massimo 30 caratteri)
- cognome (stringa di massimo 30 caratteri)
- matricola (intero)


2. Implementa le seguenti funzioni:

- studente* crea_studente(char* nome, char* cognome, int matricola): Alloca dinamicamente e inizializza un nuovo studente
- void stampa_studente(studente* s): Stampa le informazioni di uno studente
- void libera_studente(studente* s): Libera la memoria allocata per uno studente


3. Nel main:

- Chiedi all'utente quanti studenti vuole inserire
- Alloca dinamicamente un array di puntatori a studente di dimensione appropriata
- Per ogni posizione dell'array, chiedi all'utente i dati dello studente e crea un nuovo studente
- Stampa l'elenco completo degli studenti
- Libera correttamente tutta la memoria allocata