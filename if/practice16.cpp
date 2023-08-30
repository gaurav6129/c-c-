#include <iostream>
using namespace std;
int main()
{
    int i, n,a,b, prod;
    printf("enter the number");
    scanf("%ld%ld",&a,&b);
    for (n = a; n <= b; n++)
    {

        prod = 1;
        for (i = 1; i <= n; i++)
            prod = prod * i;
        printf("\n%d", prod);
    }
}
