#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int arrA[] = {1, 2, 3, 4, 5};
    int sizeA = 5;
    int arrB[] = {6, 7, 8, 9};
    int sizeB = 4;
    vector<int> ans;
    for (int i = 0; i < sizeA; i++)
    {
         ans.push_back(arrA[i]);
    }
    for (int i = 0; i < sizeB; i++)
    {
         ans.push_back(arrB[i]);
    }
    cout << "printing ans array"<<endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    } 
}