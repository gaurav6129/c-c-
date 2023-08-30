#include <iostream>
using namespace std;
int binarsearch(int low,int high,int arr[],int item)
{
  
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == item)
        {
            return mid;
        }
        else if (arr[mid] < item)
        {
            low = mid + 1;
        }
        else if (arr[mid] > item)
        {
            high = mid - 1;
        }
        else
            return -1;
    }
}
int main(void)
{
      int low = 0, high = 5;
    int mid, item = 5;
    int arr[] = {1, 2, 3, 4, 5, 6};
    return 0;
}