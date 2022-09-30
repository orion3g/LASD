#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Alberi.h"

Tree initNode(int info) {
    Tree T = malloc(sizeof(struct TTree));
    T->info = info;
    T->sx = NULL;
    T->dx = NULL;
    return T;
}

Tree insertNodeTree(Tree T, int info) {
    if (!vuoto(T)) { //se è null mi fai la malloc di un nodo
        T = initNode(info);
    } else { //se non è null 
        if (T->info > info) { //se il numero che vogliamo inserire nell'albero è maggiore della radice del nodo vai a farmi puntare il puntatore struct TTree* sx; ad un nuovo nodo che avrà la radice=info
            T->sx = insertNodeTree(T->sx, info);
        } else if (T->info < info) {    //se il numero che vogliamo inserire nell'albero è minore della radice del nodo vai a farmi puntare il puntatore struct TTree* dx; ad un nuovo nodo che avrà la radice=info
            T->dx = insertNodeTree(T->dx, info);
        }
    }
    return T;
}

void inOrder(Tree T) {
    if (vuoto) {
        inOrder(T->sx);
        printf("%d ", T->info);
        inOrder(T->dx);
    }
}

void preOrder(Tree T) {
    if (vuoto) {
        printf("%d ", T->info);
        preOrder(T->sx);
        preOrder(T->dx);
    }
}

void postOrder(Tree T) {
    if (vuoto) {
        postOrder(T->sx);
        postOrder(T->dx);
        printf("%d ", T->info);
    }
}


int vuoto (Tree T)

{ if(T) 
return 0;
else return 1; 
}



Tree randomTree(int nodes) {
    int i = 0;
    Tree T = NULL;
    for (i = 0; i < nodes; i++) {
        T = insertNodeTree(T, rand() % 40);
    }
    return T;
}


//Versione normale della ricerca
int ricerca (Tree T, int r)  

{ int trovato=0;
  
  while(T && trovato==0) //fin quando trovato==0 e radice!=NULL perché se esploriamo l'albero ad un certo punto possiamo incontrare un nodo che ha i puntatori a sx o dx null
  { 
  if(T->inforadice==r)
  
  trovato=1; /* Trovato */
  else if(T->inforadice> r) 
	  
  /* Cerca nel sottoalbero sinistro */ 
  T=T->sx;
  
  
  else 
	  
  /* Cerca nel sottoalbero destro */
  
  T=T->dx;
  
  
  }
  return trovato;
  
  }


//Versione ricorsiva della ricerca

int ricerca_ricorsivo (Tree T, int r)
{

int trovato=0;

if!(vuoto (T)) /*else non trovato poiché ABR vuoto */ 

{ if (T->inforadice==r) 
return 1; /* Trovato */
else if(T->inforadice> r) 
	
/* Cerca nel sottoalbero sx*/
trovato=ricerca(T->sx,r);


else /* Cerca nel sottoalbero destro */
trovato=ricerca(T->dx,r);

}
return trovato;

}

int ricerca_minimo (Tree T) {

/* per semplicità assumiamo tutti i valori del'abr positivi */

int min=0;
if !(vuoto(T)) {

if (T->sx==NULL) 
	
minimo=T->info;
else min=ricerca_minimo(T->sx);

}


return min;


}