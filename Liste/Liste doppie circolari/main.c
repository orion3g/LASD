#include <stdio.h> 
#include <stdlib.h>
#include <malloc.h>
#include "liste_doppie_circolari.h"


int main () 

{
	
	Lista L=NULL;
	L=mettiCoda (1, L) ;
	L=mettiCoda (4, L) ;
	L=mettiCoda (6, L) ;
	L=mettiCoda (7, L) ;

    //printf("%d", L->prec->info);
	
	visualizza_lista(L);
	printf("\n");

  
    L=eliminare_elemento(L, 1);

    visualizza_lista(L);



}
