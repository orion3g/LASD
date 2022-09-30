#include <stdio.h> 
#include <stdlib.h>
#include <malloc.h>
#include "liste_semplici.h"


int main () 

{
	
  //struct elemento *lista;
 //lista=crea_lista();
	
	
int n, x;
struct elemento *lista=NULL;
printf("Specificare numero di elementi");
scanf("%d", &n);
for(int i=0; i<n;i++) {
	
	printf("Specificare elemento n %d", i+1);
	scanf("%d", &x);
	lista=coda(x, lista);
}

 
 visualizza_lista(lista);
 
 printf("-------------------");
 lista=elimina_elementi_pari(lista);
 visualizza_lista(lista);
 
 
  printf("-------------------");
  lista=elimina_elemento_coda(lista);
  visualizza_lista(lista);


}
