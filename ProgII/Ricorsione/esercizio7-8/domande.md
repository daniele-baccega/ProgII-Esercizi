# Esercizio 7 - Ricerca binaria ricorsiva

Scrivere una funzione ricorsiva `ricerca_binaria(int arr[], int sinistra, int destra, int valore)` che implementa la ricerca binaria in un array ordinato.  

La funzione deve restituire l'indice del valore se trovato, `-1` altrimenti.  

Esempi:

int arr[] = {1, 3, 5, 7, 9}; 

ricerca_binaria(arr, 0, 4, 5) → 2 
ricerca_binaria(arr, 0, 4, 8) → -1


# Esercizio 8 - Calcolo della sequenza di Fibonacci (ricorsione)

Scrivere una funzione ricorsiva `fibonacci(n)` che calcola l'`n`-esimo numero della sequenza di Fibonacci.  

La sequenza di Fibonacci è definita come segue:

fibonacci(0) = 0 fibonacci(1) = 1 fibonacci(n) = fibonacci(n-1) + fibonacci(n-2) per n ≥ 2

Esempi:

fibonacci(5) → 5 fibonacci(7) → 13 fibonacci(10) → 55