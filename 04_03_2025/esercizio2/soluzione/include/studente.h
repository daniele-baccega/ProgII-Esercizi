/**
 * @file studente.h
 * @brief Definizione della struttura studente e prototipi delle funzioni
 */

#ifndef STUDENTE_H
#define STUDENTE_H

#define MAX_NOME 30
#define MAX_COGNOME 30

/**
 * @struct studente
 * @brief Struttura che rappresenta uno studente
 */
typedef struct {
    char nome[MAX_NOME];      /*!< Nome dello studente */
    char cognome[MAX_COGNOME]; /*!< Cognome dello studente */
    int matricola;            /*!< Numero di matricola */
} studente;

/**
 * @brief Crea un nuovo studente allocando la memoria dinamicamente
 * 
 * @param nome Nome dello studente
 * @param cognome Cognome dello studente
 * @param matricola Numero di matricola
 * @return studente* Puntatore alla struttura studente allocata, NULL in caso di errore
 */
studente* crea_studente(char* nome, char* cognome, int matricola);

/**
 * @brief Stampa i dati di uno studente
 * 
 * @param s Puntatore allo studente da stampare
 */
void stampa_studente(studente* s);

/**
 * @brief Libera la memoria allocata per uno studente
 * 
 * @param s Puntatore allo studente da liberare
 */
void libera_studente(studente* s);

#endif /* STUDENTE_H */