#include <iostream>
#include "stack.hpp"

using namespace std;

int main()
{
    Stack<int> stack;

    stack.push(10);
    cout << stack.pop() << endl;
    
    stack.push(15);
    cout << stack.pop() << endl;
}