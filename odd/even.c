#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("enter the any three number");
scanf("%d%d%d",&a,&b,&c);
if(a<b&&b>c)
printf("biggest number B");
if(a>b&&a>c)
printf("biggest number is A");
else
printf("biggest number is C");
return 0;
}
