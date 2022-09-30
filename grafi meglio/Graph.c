#include <stdio.h>
#include <stdlib.h>
#include "Graph.h"

Graph initGraph (int numeroNodi) {
	Graph G=(Graph)malloc(sizeof(struct TGraph));
	
	//La funzione prevede due argomenti, il primo rappresenta il numero di elementi da allocare 
	//mentre il secondo la quantità di memoria per ogni elemento.
	G->adj = calloc(numeroNodi, sizeof(List));
	G->num_v=numeroNodi;
	return G;
	
}

//Aggiunge un arco, specificando sorgente, key e peso: sorgente (nodo in cui esce), key(nodo in cui entra)
void addEdge(Graph G, int source, int key, int peso) {
	
    if (source != key) {
		//G->adj[source] è una lista 
        G->adj[source] = appendNodeList(G->adj[source], key, peso);
    }
    
}

// Aggiungi un nodo
void addNode(Graph G) {
    if (G != NULL) {
		
		////La funzione prevede tre argomenti, il primo rappresenta l'array quindi l'elemento che vogliamo reallocare
		//il secondo il numero di elementi da allocare nuovo
	    //mentre il terzo la quantità di memoria per ogni elemento.
        G->adj = realloc(G->adj, (G->num_v+1) * sizeof(List));
        G->num_v += 1;
        G->adj[G->num_v] = NULL;
    }
}

//Rimuove un arco, specificando sorgente e key:sorgente(nodo in cui esce), key(nodo in cui entra)
void removeEdge(Graph G, int source, int key) {
	    assert(G != NULL);
	    if (source != key) {
        G->adj[source] = removeNodeList(G->adj[source], key);
    }
}


// Rimuovi un nodo dal grafo, sistemando
// gli indici e riallocando la memoria

void removeNode(Graph G, int node_to_remove) {
    if (G != NULL) {
        int i = 0;
        int x = 0;
        List *tmp = G->adj;
        G->adj = calloc(G->nodes_count, sizeof(List));
        for (i = 0; i <= G->nodes_count; i++) {
            if (i != node_to_remove) {
                G->adj[x] = checkListRemoval(tmp[i], node_to_remove);
                x++;
            } else {
                freeList(G->adj[x]);
            }
        }
        free(*tmp);
        G->nodes_count -= 1;
    }
}


List checkListRemoval(List L, int node_to_remove) {
    if (L != NULL) {
        L->next = checkListRemoval(L->next, node_to_remove);
        if (L->target == node_to_remove) {
            List tmp = L->next;
            free(L);
            return tmp;
        } else if (L->target > node_to_remove) {
            L->target -= 1;
        }
    }
    return L;
}

void graphEditorMenu(Graph G) { //Effettua modifiche varie nel grafo G, chiamabile anche se il grafo era preesistente
	
	//printGraph(G);
		printf("1 - Aggiungi nodo\n2 - Rimuovi nodo\n3 - Aggiungi arco\n4 - Rimuovi arco\n5 - Stampa\n6 - Fine\nInput  ->  ");
		int input = 0;
		while(input>6 || input<0);
		switch(input) {
			case 1: {
				break;
			}
			case 2: {
				break;
			}
			case 3: {
				int sorgente;
				printf("Vertice sorgente:\t");
				scanf("%d", &sorgente);
				while(sorgente<0 || sorgente>=G->num_v) {printf("Selezione del nodo non valida. Riprovare\n"); }
				
				int destinazione;
				printf("Vertice destinazione:\t");
				scanf("%d", &destinazione);
				while(destinazione<0 || destinazione>=G->num_v) {printf("Selezione del nodo non valida. Riprovare\n"); }
				
				int peso;
				printf("Peso:\t");
				scanf("%d", &peso);
				while(peso<0) { printf("Peso non valido. Riprovare\n"); }
				
				
				addEdge(G, sorgente, destinazione, peso);
				break;
			}
			case 4: {
				
				break;
			}
			case 5: {

				break;
			}
			case 6: {
				return;
			}
		}
}

Graph graphCreationMenu() {
	Graph G=NULL;
	int scelta, nodi;
	do{
	
		printf("Seleziore il metodo di creazione del nuovo grafo :\n");
		printf("1) Grafo vuoto\n");
		printf("2) Grafo popolato da archi forniti in input\n");
		printf("3) Grafo popolato da archi random\n");
		scanf("%d", &scelta);
	} while(scelta>3 || scelta<0);
	
	
	printf("Quanti nodi ha il grafo?\n");
	scanf("%d", &nodi);
	
	switch(scelta){
			case 1:
			G=initGraph(nodi);
		    break;
		    
			case 2:
			graphEditorMenu(G);
			break;
			
			case 3:
	break;
	
}
return G;
}
