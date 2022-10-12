
#include <stdio.h>
#include <stdlib.h>
#include "Graph.h"

//eliminare tutti gli archi con peso pari e tutti i nodi con grado uscente dispari

int main () {
	
	Graph G=initGraph(5);
	
	
	addEdge (G, 0, 1, 99 );
	addEdge (G, 0, 3, 39 );
	addEdge (G, 1, 2, 55 );
	addEdge (G, 2, 1, 74 );
	addEdge (G, 4, 1, 106 );
	addEdge (G, 3, 0, 77 );
	addEdge (G, 4, 0, 18 );
	
	printGraph(G);
	
	
   }
