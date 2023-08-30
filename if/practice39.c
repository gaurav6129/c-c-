#include<stdio.h>
int add(int,int);
void main()
{
    int a,b,result;
    printf("enter two values  ");
    scanf("%d%d",&a,&b);
  result=add(a,b);
  printf("total value= %d",result);
}
int add(int x,int y)
{
    int sum;
    sum=x+y;
    return sum;
}