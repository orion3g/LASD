#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct TTree {
    int info;
    struct TTree* sx;
    struct TTree* dx;
};

typedef struct TTree* Tree;

// Inserisce un nodo nell'albero BST
Tree insertNodeTree(Tree T, int info);

// Inizializza un nuovo nodo
Tree initNode(int info);

// Esegue una visita In Order sull'albero T
void inOrder(Tree T);

// Esegue una visita in Pre Order sull'albero T
void preOrder(Tree T);

// Esegue una visita in Post Order sull'albero T
void postOrder(Tree T);


int ricerca (Tree T, int r);

int ricerca_ricorsivo (Tree T, int r);

int ricerca_minimo (Tree T);


Tree randomTree(int nodes);