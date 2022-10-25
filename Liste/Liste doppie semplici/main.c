#include <stdio.h> 
#include <stdlib.h>
#include <malloc.h>
#include "liste_doppie.h"


int main () 

{
	
	Lista L=NULL;
	L=mettiCoda (1, L) ;
	L=mettiCoda (4, L) ;
	L=mettiCoda (6, L) ;
	L=mettiCoda (7, L) ;
	L=mettiCoda (88, L) ;
	
	visualizza_lista(L);
	printf("\n");
	
	L=inserire_elemento(L, 60, 3);
	
	
	
    visualizza_lista(L);
    
    L=eliminare_elemento(L, 3);
    visualizza_lista(L);



}
