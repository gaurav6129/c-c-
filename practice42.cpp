#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int temp = n;
    int nod = 0;
    while (temp > 0)
    {
        temp = temp / 10;
        nod++;
    }
    int div = 1;
    int mult = 1;
    for (int i = 1; i <= nod; i++)
    {
        if (i <= k)
        {
            div = div * 10;
        }
        else
        {
            mult = mult * 10;
        }
    }
    int q = n / div;
    int r = n % div;
     r = r * mult + q;
    cout << r;
}
