#include <iostream>
#include <vector>
using namespace std;

void spiral(vector<vector<int>> &matrix)
{

    int n = matrix.size();
    int m = matrix[0].size();

    vector<int> ans;
    int top = 0, right = m - 1, bottom = n - 1, left = 0;

    while (left <= right && top <= bottom)
    {
        for (int i = left; i <= right; i++)
        {
            ans.push_back(matrix[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(matrix[i][right]);
        }
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    spiral(matrix);
    return 0;
}