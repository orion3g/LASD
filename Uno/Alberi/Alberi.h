struct TTree {
    
    int info;
    struct TTree *sx;
    struct TTree *dx;
    
    
};

typedef struct TTree *Tree;
Tree initNode(int info);
Tree insertNodeTree (Tree T, int info); 
void inOrder(Tree T);
Tree randomTree(int nodes); 
int ricerca_ricorsivo (Tree T, int r);
int ricerca_minimo (Tree T);
