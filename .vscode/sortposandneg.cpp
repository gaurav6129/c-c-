#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,2,3,4,5,-5,-8,-5,-6};

    int n=sizeof(arr)/sizeof(arr[0]);
    //int n=5;
    int l=0;
    int h=arr.size()-1;
    // for(int i=0;i<=n;i++){
    //     cin>>arr[i];
    // }

    while(l<h){
        if(arr[l]<0){
            l++;
            
        }
        else if (arr[h]>0) {
            h--;
        }
        
        else{
            swap(arr[l],arr[h]);
        }
    }
    for(int i=0;i<=arr.size()-1;i++){
        cout<<arr[i]<<" ";
    }
//     for(auto value:arr){
//         cout<<value<<" ";
//     }
}