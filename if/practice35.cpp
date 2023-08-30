#include <iostream>
using namespace std;
int main()
{
    int arr[] = {23, 34, 45, 12, 39};
    int key = 12;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            cout << "position for  " << i;
        }
       
    }
}