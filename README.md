# stack-cpp
This is stack realization on cplusplus

## Description
if you do not specify the stack size in the constructor, it will be created with a size of 255

char* getLastError() - return lastError

bool isFull() - return true if stack is full

void push(T value) - push value to stack

T pop() - return last pushed value from stack

T peek() - return last pushed value from stack BUT pointer not decremented

int size() - return what elements in the stack at the moment

bool isEmpty() - return true if stack is empty
