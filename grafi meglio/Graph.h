#include "List.h"
#define MAX 20

struct TGraph{
	int num_v;
	List* adj;//contiene l'indirizzo dell'i-esima posizione dell'array che possiede l'indirizzo della lista
};

typedef struct TGraph* Graph;

Graph initGraph (int numeroNodi);
void addEdge(Graph G, int source, int key, int peso);
void addNode(Graph G);
void graphEditorMenu(Graph G);
Graph graphCreationMenu();



