#include <iostream>
using namespace std;
int main()
{
    int n = 5, mid, start = 0, end = 4, key = 56;
    int arr[] = {12, 23, 34, 56, 67};
    /*for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] <<" ";
    }*/
    while (start > end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            cout << mid;
            break;
        }
        else if (arr[mid] < key)
        {
            end = mid - 1;
        }
       else if (arr[mid] > key)
        {
            start = mid + 1;
        }
        else
        return -1;
    }
    return 0;

    // printf("%d",arr[n]);
}