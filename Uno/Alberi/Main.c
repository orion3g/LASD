#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include "Alberi.h"

int main()
{
    Tree T;
    T=randomTree(8);
    T=insertNodeTree (T, 6); 
    inOrder(T);
    
    if(ricerca_ricorsivo(T, 7)) {
    printf("TROVATO!");}
    
    else 
    
    printf("NON TROVATO!");
    

    return 0;
}







