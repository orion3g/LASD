#define QUEUE_MAX 5

struct TQueque {
	
	int A[QUEUE_MAX+2];
	};
	

typedef struct TQueque *Queue;  //questa tipologia di dichiarazione dichiara un puntatore, quindi in initQueue Queue Q = malloc(sizeof(struct TQueque )); 
//alloca spazio e ritorna un puntatore 

// Inizializza una nuova coda e ritorna un puntatore
// ad una struct di tipo Queue
Queue initQueue();

// Ritorna 1 se la coda e' vuota, altrimenti torna 0
int emptyQueue(Queue);

// Ritorna 1 se la coda e' piena, altrimenti torna 0
int fullQueue(Queue);

// Accoda un elemento nella struttura
// "err", passato per riferimetno dall'esterno
// restera' 0 se non ci sono errori
// altrimenti se l'accodamento non va a buon fine
// poiche' la coda e' piena, err sara' uguale a 5
void enqueue(Queue, int, int*);

// Toglie un elemento dalla struttura
// "err", passato per riferimetno dall'esterno
// restera' 0 se non ci sono errori
// altrimenti se il decodamento non va a buon fine
// poiche' la coda e' vuota, err sara' uguale a 6
int dequeue(Queue, int*);

// Per la stampa della coda dobbiamo utilizzare 2 funzioni: printQueueInc e reverseQueue questo perché solo stampa produrrebbe un'inversione della coda
void printQueue(Queue, int*); 

//creo coda con valori da input
void new_coda(Queue Q);
