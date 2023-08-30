#include<iostream>
using namespace std;
int main()
{
    int a,b,c,i,n;
    i=1;
    printf("enter the value ");
    scanf("%d",&n);
    
    while(i<=n)
    {
        a=i%10;
        b=i%100;
        b=(b-a)/10;
        c=i/100;
        if((a*a*a)+(b*b*b)+(c*c*c)==i)
        {
            printf("value=%d\n",i);

        }
        i++;
    }
}