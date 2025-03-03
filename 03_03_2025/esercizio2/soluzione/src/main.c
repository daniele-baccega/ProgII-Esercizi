/**
 * @file main.c
 * @brief Programma principale per la gestione di un elenco di studenti
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/studente.h"

/**
 * Funzione principale
 */
int main() {
    int num_studenti, i;
    studente** elenco; // Array di puntatori a studente
    char nome_temp[MAX_NOME];
    char cognome_temp[MAX_COGNOME];
    int matricola_temp;
    
    // Chiedi all'utente quanti studenti vuole inserire
    printf("Quanti studenti vuoi inserire? ");
    scanf("%d", &num_studenti);
    getchar(); // Consuma il carattere newline rimasto nel buffer
    
    // Verifica che il numero di studenti sia valido
    if (num_studenti <= 0) {
        printf("Il numero di studenti deve essere positivo.\n");
        return 1;
    }
    
    // Alloca l'array di puntatori a studente
    elenco = (studente**)malloc(num_studenti * sizeof(studente*));
    
    // Verifica se l'allocazione è andata a buon fine
    if (elenco == NULL) {
        fprintf(stderr, "Errore: impossibile allocare memoria per l'elenco\n");
        return 1;
    }
    
    // Inizializza tutti i puntatori a NULL per gestire eventuali errori
    for (i = 0; i < num_studenti; i++) {
        elenco[i] = NULL;
    }
    
    // Per ogni studente, chiedi i dati e crea il nuovo studente
    for (i = 0; i < num_studenti; i++) {
        printf("\nInserimento dello studente %d:\n", i + 1);
        
        printf("Nome: ");
        fgets(nome_temp, MAX_NOME, stdin);
        nome_temp[strcspn(nome_temp, "\n")] = '\0'; // Rimuove il carattere newline
        
        printf("Cognome: ");
        fgets(cognome_temp, MAX_COGNOME, stdin);
        cognome_temp[strcspn(cognome_temp, "\n")] = '\0'; // Rimuove il carattere newline
        
        printf("Matricola: ");
        scanf("%d", &matricola_temp);
        getchar(); // Consuma il carattere newline rimasto nel buffer
        
        // Crea il nuovo studente
        elenco[i] = crea_studente(nome_temp, cognome_temp, matricola_temp);
        
        // Verifica se la creazione è andata a buon fine
        if (elenco[i] == NULL) {
            fprintf(stderr, "Errore nella creazione dello studente %d\n", i + 1);
            
            // Libera la memoria allocata finora
            for (int j = 0; j < i; j++) {
                libera_studente(elenco[j]);
            }
            free(elenco);
            
            return 1;
        }
    }
    
    // Stampa l'elenco completo
    printf("\n=== ELENCO DEGLI STUDENTI ===\n");
    for (i = 0; i < num_studenti; i++) {
        printf("\nStudente %d:\n", i + 1);
        stampa_studente(elenco[i]);
    }
    
    // Libera la memoria allocata per ogni studente
    for (i = 0; i < num_studenti; i++) {
        libera_studente(elenco[i]);
        elenco[i] = NULL; // Buona pratica: imposta a NULL il puntatore dopo averlo liberato
    }
    
    // Libera la memoria allocata per l'array di puntatori
    free(elenco);
    elenco = NULL; // Buona pratica: imposta a NULL il puntatore dopo averlo liberato
    
    printf("\nMemoria liberata correttamente. Programma terminato.\n");
    
    return 0;
}