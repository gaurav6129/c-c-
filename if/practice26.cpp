#include <stdio.h>
int main()
{
    int row, star, space;

    for (row = 1; row <= 5; row++)
    {
        for (star = 1; star <= row; star++)
        {
            printf("* ");
            
        }
        printf("\n");
    }
}