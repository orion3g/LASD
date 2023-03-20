#include <stdio.h>
#include "list.h"


//data una lista doppiamente puntata circolare, scrivere funz che rimpiazzi ogni elemento in posizione dispari con la media tra gli elementi alla sua destra
//e alla sua sinistra. Per la numerazione si assuma che il primo elemento si trovi in posizione 1.

int main()
{
   Lista head=NULL;
   
   head=insert(55, head);
   head=insert(96, head);
   head=insert(14, head);
   head=insert(5, head);
   

   print(head);
   printf(" \n dopo sostituzione \n");
   head=sostituzione(head);
   print(head);
   
}
