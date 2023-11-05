#include <iostream>
#include<vector>
#include <stdlib.h>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    vector<int> brr{2, 3, 4};
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        for (int j = 0; j < arr.size(); j++)
        {
            if (element == brr[j])
            {
                ans.push_back(element);
            }
        }
    }
    // for(int i=0;i<ans.size();i++)
    // cout << "The common elements are: ",ans[i]}
    for(auto value: ans){
        cout<<value<<" ";
    }
    cout<<endl;
}    