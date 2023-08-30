#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter the number");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a>b&&a>c&&a>d&&a>e)
    printf("A..is a biggest number");
    if(a<b&&c<b&&d<b&&e<b)
    printf("B..is a biggest number");
    if(c>a&&c>b&&c>d&&c>e)
    printf("C..is a biggest number");
    if(d>a&&d>b&&d>c&&d>e)
    printf("D..is a biggest number");
    else
    printf("E..is a biggest number");
    return 0;
}