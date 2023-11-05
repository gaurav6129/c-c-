#include <iostream>
#include <vector>
using namespace std;
int finduniqueElement(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i <= arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    //int n;
    cout << "Give the Array Size :-" << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the element in array : ";
    for (int i = 0; i <= arr.size(); i++)
    {
        cin >> arr[i];
    }
    // for(int i=0;i<=arr.size();i++)
    // cout<<arr[i];
    int uniqueElement = finduniqueElement(arr);
    cout<<"uniqueelement is : " << uniqueElement;

    return 0;
}