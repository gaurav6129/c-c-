#include <stdio.h>

int Sum(int n)
{
    if (n <= 1)
        return n;
    return n +Sum(n - 1);
}
 

int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("%d",Sum(n));
    return 0;
}