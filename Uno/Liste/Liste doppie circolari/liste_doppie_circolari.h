
struct TList {
	int info;
	struct TList *prev;
	struct TList *next;
};

typedef struct TList *Lista;
Lista insert(int x, Lista head);
Lista newElement(int x);
void print(Lista head);

Lista delete (Lista head, Lista nodoToDelete);
Lista sostituzione (Lista head);