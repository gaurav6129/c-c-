#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{5, 4, 3, 2, 1};
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minElement = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minElement])
            {
                minElement = j;
            }
        }
        swap(arr[i], arr[minElement]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}