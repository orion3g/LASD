#include <stdio.h>
#include <stdlib.h>
#include "List.h"

// Inizializza un nuovo nodo

List initNodeList(int info, int peso) {
    List L = malloc(sizeof(struct TList));
    L->key = info;
    L->peso = peso;
    L->next = NULL;
    return L;
}


// Aggiunge un nodo alla fine della lista
// controllandone l'esistenza
// La funzione ritorna sempre la testa della lista

List appendNodeList(List L, int key, int peso) {
	//il nome della lista è sempre il puntatore al suo primo elemento
    if (L != NULL) {
        if (L->key != key) //ovvero se questo arco non esiste
        {
            L->next = appendNodeList(L->next, key, peso);
            
            //praticamente va avanti ricorsivamente finché L sarà null, quando questa condizione sarà vera (L->next=NULL ovvero che 
            //appendNodeList avrà un L->next in input NULL) si instanzierà un nuovo elemento della lista e lo metterà in coda
        }
    } else {
        L = initNodeList(key, peso);
    }
    return L;
}


