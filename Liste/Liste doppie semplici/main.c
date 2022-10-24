#include <stdio.h> 
#include <stdlib.h>
#include <malloc.h>
#include "liste_semplici.h"


int main () 

{
	
	Lista L=NULL;
	L=mettiCoda (1, L) ;
	L=mettiCoda (4, L) ;
	L=mettiCoda (6, L) ;
	L=mettiCoda (7, L) ;
	L=mettiCoda (88, L) ;
    visualizza_lista(L);


}
