#include<iostream>
using namespace std;
int main()
{
    int i,table,number;
    
    printf("type any integer name");
    scanf("%d",&table);
    if(table>1)
    for(i=1;i<=10;i++)
    {
        number=table*i;
        printf("\n%d",number);
        
    }
    else
    printf("given user number are negetive");
}