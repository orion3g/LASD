#include <stdio.h>
#include "stack.h"

int main(int argc, const char * argv[]) {
    int err = 0;
    Stack S = initStack();
    randomStack(S, 20, &err);
    printStack(S, &err);
    // insert code here...
    printf("\n Hello, World!\n");
    return 0;
}

