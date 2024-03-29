#ifndef Matrix_Graph_H
#define Matrix_Graph_H

struct graphmat{
  int *adj;
  int nodes_count;
  int *weights;
};

typedef struct graphmat* Graphmat;

// Crea un grafo in modo random con nodes nodi
Graphmat randomGraphMat(int nodes);

// Dealloca l'intero grafo
void freeGraphMat(Graphmat G);

// Inizializza un nuovo grafo vuoto specificando in ingresso quanti nodi saranno nel grafo
Graphmat initGraphMat(int nodes_count);

// Stampa il grafo
void printGraphMat(Graphmat G);

// Aggiunge un arco, specificando sorgente, target e peso
void addEdgeMat(Graphmat G, int source, int target, int peso);

// Rimuovi un arco specificando sorgente e target
void removeEdgeMat(Graphmat G, int source, int target);

// Aggiungi un nodo
void addNodeMat(Graphmat G);

// Rimuovi un nodo dal grafo, sistemando gli indici e riallocando la memoria
void removeNodeMat(Graphmat G, int node_to_remove);

// Crea un nuovo grafo e lo popola in base alla scelta effettuata dal menu
Graphmat graphCreationMenuMat(int n);

// Menu per la modifica e gestione dei grafi
void graphEditorMenuMat(Graphmat);

// ritorna l'indice nella matrice dell'arco da i a j
int graphIndexMat(Graphmat G, int i, int j);

#endif
