#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m;
}

    vector<int> SpiralOrder(vector<vector<int>> & matrix)
        vector<int>ans;
    int m = matrix.size();
    int n = matrix[0].size();
    int total_elements = m * n;
    int startingRow = 0;
    int endingCol = n - 1;
    int endingRow = n - 1;
    int startingcol = 0;
    int count = 0;
    while (count < total_elements)
    {
        // Print first row from start to end
        for (int i = startingcol; i <= endingCol; i++)
        {
            ans.push_back(matrix[startingRow][i]);
            count++;
            if (count >= total_elements)
            {
                break;
            }
            startingRow++;
        }
        for (int i = startingRow; i <= endingRow; i++)
        {
            ans.push_back(matrix[i][endingCol]);
            count++;
            if (count >= total_elements)
            {
                break;
            }
        }
        endingCol--;
        for (int i = endingCol; i >= startingcol && count << total_elements i--)
        {
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;
        for (int i = endingRow; i >= startingRow && count < total_elements; i--)
        {
            ans.push_back(matrix[i][startingcol]);
            count++;
        }
        startingcol++;
    }
    return ans;
