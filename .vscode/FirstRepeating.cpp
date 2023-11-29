#include <iostream>
#include<vector>             ///bruthforce aproch
using namespace std;
int main()
{
    vector<int> arr{1, 2, 3, 1, 5, 8};
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                //arr.erase(arr.begin() + j);
                cout<<arr[i];
            }
        }
    }
    
}