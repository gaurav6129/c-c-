#include <stdio.h>
int main()
{
    int a[10], i, sum = 0, avg;
    printf("enter the number");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        sum = sum + a[i];
        avg = sum / 10.0;
    }

    printf("\n total sum==%d", sum);
    printf("avrage==%d", avg);
}