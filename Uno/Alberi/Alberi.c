Tree initNode(int info) {
    Tree T = malloc(sizeof(struct TTree));
    T->info = info;
    T->sx = NULL;
    T->dx = NULL;
    return T;
}

Tree insertNodeTree (Tree T, int info) {
    
    if(T!=NULL) {
        
    if (T->info > info) { //se il numero che vogliamo inserire nell'albero è
                          //maggiore della radice del nodo vai a farmi puntare 
                          //il puntatore struct TTree* sx; ad un nuovo nodo che avrà la radice=info
            T->sx = insertNodeTree(T->sx, info);
        } 
        
        else if (T->info < info) {    //se il numero che vogliamo inserire nell'albero è minore 
                                        //della radice del nodo vai a farmi puntare il puntatore 
                                        //struct TTree* dx; ad un nuovo nodo che avrà la radice=info
                                        
            T->dx = insertNodeTree(T->dx, info);
        }
        
        
    }
    
    else 
    
    T = initNode(info);
    
    
    return T;
}

void inOrder(Tree T) {
    if (T!=NULL) {
        inOrder(T->sx);
        printf("%d ", T->info);
        inOrder(T->dx);
    }
}

void preOrder(Tree T) {
  if (T!=NULL) {
        printf("%d ", T->info);
        preOrder(T->sx);
        preOrder(T->dx);
    }
}

void postOrder(Tree T) {
    if (T!=NULL) {
        postOrder(T->sx);
        postOrder(T->dx);
        printf("%d ", T->info);
    }
}

Tree randomTree(int nodes) {
    int i = 0;
    Tree T = NULL;
    for (i = 0; i < nodes; i++) {
        T = insertNodeTree(T, rand() % 40);
    }
    return T;
}

//Versione ricorsiva della ricerca

int ricerca_ricorsivo (Tree T, int r)
{

int trovato=0;

if (T!=NULL) /*else non trovato poiché ABR vuoto */ 

{ if (T->info==r) 
return 1; /* Trovato */
else if(T->info> r) 
	
/* Cerca nel sottoalbero sx*/
trovato=ricerca_ricorsivo(T->sx,r);


else /* Cerca nel sottoalbero destro */
trovato=ricerca_ricorsivo(T->dx,r);

}


return trovato;

}

int ricerca_minimo (Tree T)
{ 
/* per semplicità assumiamo tutti i valori del ABR positivi*/
int min=0;
if (T!=NULL) {
	
if(T->sx==NULL) 

min=T->info;

else
 min= ricerca_minimo(T->sx);}
return min;
}
