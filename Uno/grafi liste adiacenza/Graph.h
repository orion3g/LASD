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
