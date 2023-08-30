#include <iostream>
using namespace std;
int main()
{
    int x = 1, space, star, row;
    for (row = 1; row <= 4; row++)
    {
        for (space = 1; space <= 4 - row; space++)

            printf(" ");
        for (star = 1; star <= x; star++)

            printf("*");
        x = x + 2;
        printf("\n");

        // printf("\n");
    }
    return 0;
}