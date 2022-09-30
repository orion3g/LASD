#define Library_stack_h
#define STACK_MAX 128

struct TStack{
	int A[STACK_MAX+1];
};


typedef struct TStack *Stack;

//inizializza un nuovo stack e ritorna un puntatore ad una struct di tipo Stack 
Stack initStack();

//ritorna 1 e lo stack è vuoto altrimenti torna 0
int emptyStack(Stack);

//ritorna 1 se lo stack è pieno altrimenti torna 0
int fullStack(Stack);

//aggiunge un elemento alla struttura
//err passato per riferimento dall'esterno, resterà 0 se non ci sono errori altrimenti se il push non è andato a buon fine poiché lo stack è piena err sarà uguale a 5  

void push(Stack, int, int*);

//elimina un elemento dalla struttura 
//err passato per riferimento dall'esterno resterà 0 se non ci sono errori altrimenti se il pop non è andato a buon fine poiché lo stack è vuoto err sarà uguale a 6
int pop(Stack, int*);

//stampa lo stack 
void printStack(Stack S, int *err);

//setta lo stack con variabili da input
void new_stack(Stack S);

// Dato uno Stack S, attraversera' tutto lo Stack inserendo
// in un altro Stack dato in ingresso 'tmp' tutti gli
// elementi nell'ordine inverso
void reverseStack(Stack S, Stack tmp, int *err);

//crea stack random
void randomStack(Stack S, int n, int *err);
