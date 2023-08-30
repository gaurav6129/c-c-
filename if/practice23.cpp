#include <iostream>
using namespace std;

int main()
{
    int n, i, m, j, k;
    cin >> n;
    for ( i = 1; i <= n; i++)    //n=5
    {
        for ( m = 1; m <= n - i; m++)   //4
        {
            cout << " ";
        }
        for ( k = 1; k <= i; k++)
        {
            cout << '*';
            for ( j = 1; j <= i; j++)
            {
                cout << 'e';
            }
            cout << " ";
        }
        cout << endl;
    }
}
