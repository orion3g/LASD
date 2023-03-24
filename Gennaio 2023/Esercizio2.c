//Scrivere una funzione che, dato un ABR T e una chiave k, verifichi che T sia un BR
//e che K sia in T. Poi si rimuova il minimo del sottoalbero radicato in T

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct TTree {
	struct TTree *sx;
	struct TTree *dx;
	int info;
	
};

typedef struct TTree *Tree;
Tree initNode(int info);
Tree insertNode(int info, Tree T);
int riconosci_ABR(Tree T);
int ricerca(Tree T, int r) ;
void inOrder(Tree T);

int main () {
	
	Tree T=NULL;
	printf("ciao");
	T=insertNode(3, T);
	T=insertNode(4, T);
	T=insertNode(2, T);
	
	
	inOrder(T);
	
	
	
};

Tree initNode(int info) {
	Tree T=(struct TTree*)malloc(sizeof(struct TTree));
	T->info=info;
	T->sx=NULL;
	T->dx=NULL;
	
	return T;	
}


Tree insertNode(int info, Tree T) {
	
	if(T!=NULL) {
		
		if(T->info<info) {
		
		T->dx=insertNode(info, T->dx);
		}
		
		
		
		else if(T->info>info)
		
		{
				T->sx=insertNode(info, T->sx);
		}
	
		
	}
	
	else 
	
	T=initNode(info);
	
	return T;
	
}


//verifichiamo che T è un ABR 

int riconosci_ABR(Tree T) {
	
	if((T->sx)!=NULL && (T->sx->info)>T->info)
	return 0;
	
	if ((T->dx)!=NULL && (T->dx->info)<T->info)
	return 0;
	
	if(!riconosci_ABR(T->sx)|| !riconosci_ABR(T->dx))
	return 0;
	
	return 1;
	
}

//dato k verifichi che k sia in T 

int ricerca(Tree T, int r) {
	int trovato=0; 
	
	if (T!=NULL) {
		
		if (T->info==r) {
			
			return 1; //trovato
		}
			
		else if(T->info >r) {
			trovato=ricerca(T->sx, r); //cerca nel sottoalbero sx
			
		}
		
		else 
		
		trovato=ricerca(T->dx, r); //cerca nel sottoalbero dx
	}
	
}

//si rimuova il minimo del sottoalbero radicato in T

int ricerca_minimo (Tree T) {
	
	int min=0;
	
	if(T!=NULL) {
		if (T->sx==NULL) {
			
	min=T->info;
		}
		
		else 
		
		min=ricerca_minimo(T->sx);
	}
	
	
	return min;
	
}

void inOrder(Tree T) {
    if (T!=NULL) {
        inOrder(T->sx);
        printf("%d ", T->info);
        inOrder(T->dx);
    }
}

