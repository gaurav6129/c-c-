#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    // int arr[] = {1, 2, 3, 4, 5, 6, 8};
    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] > maxi)
    //         maxi = arr[i];
    // }
    // cout << "Maximum element in the array is : " << maxi << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] < mini)
    //         mini = arr[i];
    // }
    // int size = 8; // INT_MIN=-1;
    // int maxi = INT_MIN;
    // int mini = INT_MAX;
    // cout << "Minimum element in the array is : " << mini;





   // int arr[]={1,0,2,0,3,0,0,8,2,0};
    // int size=10;
    // //bool flag=false;
    // int key=0;
    // for(int i=0;i<size;i++){
    //     if(arr[i]==0)
    //     key++;

    // }
    // cout<<"total repeat number "<<key;






    //   int arr[]={1,2,3,4,5,6,7,8,9} ; //{1,9,2,8,3,7,4,6,5}
    //   int size=9;
    //   int start=0;
    //   int end=size-1;
    //   while(start<=end){
    //     if(start==end){
    //         cout<<arr[start];
    //     }
    //     else{
    //     cout<<arr[start]<<" ";
    //     cout<<arr[end]<<" ";
    //     }
    //     start++;
    //     end--;
    //   }






    //  int arr[]={1,2,3,4,5,6,7,8,9} ; //{9,8,7,6,5,4,3,2,1}
    //  int size=9;
    //  int start=0;
    //  int end=size-1;
    //  while (start<=end)
    //  {
    //     swap(arr[start],arr[end]);
    //     start++;
    //     end--;

    //     /* code */
    //  }
    //  cout<<"final swapp array are : ";
    //  for(int i=0;i<=size-1;i++){
    //     cout<<arr[i]<<" ";
    //  }




    int arr[]={1,2,3,4,5,6,7,8,9} ; //{9,8,7,6,5,4,3,2,1}
    int size=9;
    cout<<"final array are : ";
    for(int i=size-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
     
}