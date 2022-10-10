#include "Graph.h"
#include "assert.h"
#include <stdio.h>
#include <stdlib.h>

Graph initGraph (int num_v) {

Graph G=malloc(sizeof(struct TGraph));
G->num_v=num_v;
G->adj=calloc(num_v, sizeof(struct TList));
	

return G;	
}

//aggiunge arcim soecificante, sorgente(nodo in cui esce), key(nodo in cui entra)  e peso 

void addEdge (Graph G, int source, int key, int peso){
	
	assert(G!=NULL);
	assert (key< G->num_v);
	assert (source< G->num_v);
	
	if (key!=source) {
		
		G->adj[source]=appendNodeList(G->adj[source], key, peso);
		
		}
}

//rimuove un arco specificanto sorgente e key

void removeEdge (Graph G, int source, int key) {
     
    assert(G!=NULL);
	assert (key< G->num_v);
	assert (source< G->num_v);
	
	if (key!=source) {
		
		G->adj[source]=removeNodeList(G->adj[source], key);
		
		}
}

//aggiunge un nodo

void addNode (Graph G){
	if (G!=NULL) {
	G->adj=realloc(G->adj, G->num_v+1 *sizeof(struct TList));
	G->num_v+=1;
	G->adj[G->num_v]=NULL;
	
}
	
}

//rimuove un nodo dal grafo, sistemando gli indici e riallocando la memoria

void deleteNode(Graph G, int nodoDaEliminare) {
	
	if (G!=NULL) {
	int x=0;
	int i=0;
	List *tmp=G->adj;
	G->adj=calloc(G->num_v-1, sizeof(struct TList));	
	
	
	for(i=0;i<G->num_v; i++) {
		
		if (i!=nodoDaEliminare){
			G->adj[x]=checkListNode(tmp[i], nodoDaEliminare);
			x++;
			}
			
			else {
			
			freeList(tmp[i]);
}
		}
		
		free(*tmp);
		G->num_v-=1;
			
	}
}


List checkListNode(List L, int nodoDaEliminare) {
	
	if(L!=NULL) {
	
		L->next=checkListNode(L->next, nodoDaEliminare); 
		//quest'istruzione per scorrere la lista
		
		if(L->key==nodoDaEliminare) {
	  	List tmp=L->next;
		free(L);
		return tmp;
		
		}
	     
	    else if (L->key>nodoDaEliminare)
	     
	     {
	         L->key-=1;
	         
	     }
	   
	}
		
	
	return L;
	
}

void printGraph(Graph G) {
	
	for (int i=0; i<G->num_v;i++) {
		
		printf("%d", i );
		printList(G->adj[i]);
		printf("\n");
		
		}
	
}



