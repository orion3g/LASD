#include "List.h"

struct TGraph {
	
	int num_v;
	List *adj;
	
};

typedef struct  TGraph *Graph;
Graph initGraph (int num_v);
void addEdge (Graph G, int source, int key, int peso);
void removeEdge (Graph G, int source, int key);
void deleteNode(Graph G, int nodoDaEliminare);
List checkListNode(List L, int nodoDaEliminare);
void printGraph(Graph G);
void elimina_archi_pari (Graph G);
void elimina_nodi_grado_dispari(Graph G);
