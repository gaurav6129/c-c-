#include<iostream>
using namespace std;
int main()
{
     int arr[]={1,2,3,4,5,6,7,67,4};//[2,1,2,3,4,5,6,7,8,67,4]
   int n=9,i=0;

        for (int i=0;i<n;i++)
        {
            printf("\n%d",arr[i]);
                                           //khin gadbad horhhi kya

        }
        printf("\n");
        for(int i=n;i>=0;i--)//n=8 //arr[]
        {
            arr[i+1]=arr[i];
        }
        
        arr[0]=2;
        
        //jo number insert kerna hain wo value
        //n++;
        printf("new array");
        for(i=0;i<=9;i++)
        {
            printf("%d",arr[i]);
        }





}
//arr[]=     ///arr[0]=start
///arr[7]=end
//54---arr[0]
////[23,45,34,23,67,34]
//      arr[i]=arr[i+1]