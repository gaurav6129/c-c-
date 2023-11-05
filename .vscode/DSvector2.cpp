#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr;
    // cout<<arr.size()<<endl;
    // cout<<arr.capacity();
    arr.push_back(5);
    arr.push_back(10);
    arr.push_back(12);
    for(int i=0;i<=arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}