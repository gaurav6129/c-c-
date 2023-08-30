#include <iostream>
using namespace std;
int glob = 8;
void sum()
{
    int a;
    cout << glob;
}
int main()
{
    int glob = 56;
    glob = 67;
    glob = 890;
    sum();
    cout << glob;
    return 0;
}
