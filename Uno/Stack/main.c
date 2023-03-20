#include <stdio.h>
#include "stack.h"

int main () {
	
	int err=0;
	Stack S=initStack();
	new_stack(S); 
	printStack(S, &err);
	return 0;
	
	}
