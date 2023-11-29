// BASIC 2D ARRAY INPUT AND PRINT//
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //     int a[10][10];
    //     int n,m;
    //     cout << "Enter the number of rows: ";
    //     cin >> n;
    //     cout << "Enter the number of columns: ";
    //     cin >> m;
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < m; j++)
    //         {
    //             cin >> a[i][j];
    //         }
    //     }
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < m; j++)
    //         {
    //             cout << "\t"<<a[i][j];
    //             //cout<<\t;
    //         }
    //         cout<<endl;
    //     }
    //     vector<vector<int>> arr
    //     {
    //         {1, 2, 3},
    //         {4, 5, 6},
    //         {7, 8, 9}

    //     };
    //     // int A = arr.size(), B = arr[0].size();
    //     for (int K = 0; K < arr[0].size(); K++)
    //     {
    //         if (K % 2 == 0)
    //         {
    //             for (int j = 0; j < arr.size(); j++)
    //             {
    //                 cout << arr[K][j]<<" ";
    //             }
    //         }
    //         else
    //         {
    //             for (int j = arr[0].size() - 1; j>= 0; j--)
    //             {
    //                 cout << arr[K][j]<<" ";
    //             }
    //         }
    //     }

    // }
    int arr[4][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << "\t";
            // cout<<endl;
        }
        cout << endl;
    }
}
