
struct TList {

int peso;
int key;
struct TList *next;	
		
};

typedef struct TList *List;
List initList(int key, int peso);
List appendNodeList(List L, int key, int peso);
List removeNodeList(List L, int key);
void printList(List L);
void freeList(List L);
