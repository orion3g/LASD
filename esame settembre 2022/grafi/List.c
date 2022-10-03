#define "List.h"

List initNodeList (int key, int peso) {
	List L=malloc(sizeof(struct TList);
	L->key=key;
	L->peso=peso;
	L->next=NULL;
	
	return L;
	
}



List appendNodeList(List L, int key, int peso) {
	
	if (L!=NULL) {
		
		if (key!=L->key) {
			
			L->next=appendNodeList(L->next, key, peso);
			
			}
		}
		
		else 
		
	
	L=initNodeList(key, peso);	
	
	
	
	return L;
}

List removeNodeList (List L, int key) {
	
	if (L!=NULL) {
		
		if (L->key!=key) {
			
			L->next=removeNodeList (L->next, int key) {
			
			}
		
		
		else 
		
		{
			List tmp=L->next;
			free(L);
			return tmp;
			
			
			}
		
		}
	
	return L;
	}
