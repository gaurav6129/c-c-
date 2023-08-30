#include <iostream>
using namespace std;
int main()
{
    int pos = 3, len = 5, i;
    int arr[] = {1, 2, 3, 4, 5};

    /*for (i = pos; i < len; i++)
    {
        arr[i] = arr[i + 1];
    }*/
    len = len - 1;
    for (i = 0; i < 4; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}