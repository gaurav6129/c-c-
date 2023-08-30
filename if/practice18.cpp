#include<iostream>
using namespace std;
int main()
{
    int i=0,n;
    printf("enter the value= ");
    scanf("%d",&n);
    while (i<=n)
    {
        if(i%2==0&&i%3==0)
        printf("i= %d\t",i);
        i++;

    }

    
}