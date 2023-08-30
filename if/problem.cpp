#include<iostream>
using namespace std;
int main()
{
    int n,temp=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        temp++;
    }
    if(temp==2)
    
        cout<<"prime number";
        else
        cout<<"not prime number";
    

}