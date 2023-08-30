#include <iostream>
using namespace std;
int main()
{
    int row, space, star, k;
    for (row = 1; row <= 4; row++)
    {
        for (space = 1; space <= 4 - row; space++)
        {
            printf(" ");
        }
        for (star = 1; star <= row; star++)
        {
            printf("*");
            for (k = 1; k <= row; k++)
                printf("@ ");
        }
        printf("\n");
    }
}