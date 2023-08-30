#include <stdio.h>
#include <conio.h>
void push(x)
{
    if (Top == size - 1)
    {
        printf("stack is alredy fill");
        return;
    }
    else

        Top++;
    stack[top] = x;
}