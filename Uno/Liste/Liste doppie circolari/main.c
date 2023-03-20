
#include <stdio.h>
#include "list.h"
int main()
{
   Lista head=NULL;
   
   head=insert(55, head);
   head=insert(96, head);
   head=insert(14, head);
   head=insert(5, head);
   

  print(head);

   Lista tmp=head;
  // head=delete(head, tmp);
   //printf(" \n dopo \n");
   //print(head);
   
   printf(" \n dopo dopo \n");
   head=sostituzione(head);
   print(head);
   
}
