/**
 * @file studente.c
 * @brief Implementazione delle funzioni per la gestione degli studenti
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include "../include/studente.h"
 
 /**
  * Implementazione di crea_studente
  */
 studente* crea_studente(char* nome, char* cognome, int matricola) {
     // Allocazione dinamica della memoria per un nuovo studente
     studente* nuovo_studente = (studente*)malloc(sizeof(studente));
     
     // Verifica se l'allocazione è andata a buon fine
     if (nuovo_studente == NULL) {
         fprintf(stderr, "Errore: impossibile allocare memoria per lo studente\n");
         return NULL;
     }
     
     // Inizializzazione dei campi della struttura
     strncpy(nuovo_studente->nome, nome, MAX_NOME - 1);
     nuovo_studente->nome[MAX_NOME - 1] = '\0';  // Assicura terminazione della stringa
     
     strncpy(nuovo_studente->cognome, cognome, MAX_COGNOME - 1);
     nuovo_studente->cognome[MAX_COGNOME - 1] = '\0';  // Assicura terminazione della stringa
     
     nuovo_studente->matricola = matricola;
     
     return nuovo_studente;
 }
 
 /**
  * Implementazione di stampa_studente
  */
 void stampa_studente(studente* s) {
     if (s == NULL) {
         printf("Errore: studente non valido\n");
         return;
     }
     
     printf("Matricola: %d\n", s->matricola);
     printf("Nome: %s\n", s->nome);
     printf("Cognome: %s\n", s->cognome);
 }
 
 /**
  * Implementazione di libera_studente
  */
 void libera_studente(studente* s) {
     if (s != NULL) {
         free(s);
     }
 }