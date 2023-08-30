#include <iostream>
using namespace std;
int main()
{
   
    int arr[6] = {12, 13, 14, 15, 16, 17};
    int low, high, size,mid;
    low = 0;
    size = 6;
    high = size-1;
    mid = 0;
    //size = 6;

    int element = 16;

    while (low < high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            cout<<mid;
            break;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else if (arr[mid] > element)
        {
            high = mid - 1;
        }
        else
        {
            return -1;
        }
    }
    return 0;
}