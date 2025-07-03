/*#include <iostream>
#include <vector>
using namespace std;

void markrow(vector<vector<int>> &matrix, int n, int m, int i)
{
    for (int j = 0; j < m; j++)
    {
        if (matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    }
}

void markcol(vector<vector<int>> &matrix, int n, int m, int j)
{
    for (int i = 0; i < n; i++)
    {
        if (matrix[i][j] != 0)
        {
            matrix[i][j] = -1;
        }
    }
}

vector<vector<int>> zeromatrix(vector<vector<int>> &matrix, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                markrow(matrix, n, m, i);
                markcol(matrix, n, m, j);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == -1)
            {
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}


int main()
{

    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans = zeromatrix(matrix, n, m);

    for (auto it : ans)
    {
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}*/

#include<iostream>
#include<vector>
using namespace std ;

vector<vector<int>> zeromatrix(vector<vector<int>> &matrix, int n, int m){
    
    vector<int> row(n,0) , col(m,0) ;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(matrix[i][j] == 0){
                row[i] = 1 ;
                col[j] = 1 ;
            }
        }
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(row[i]|| col[j]){
                matrix[i][j] = 0 ;
            }
        }
    }
    return matrix ;
}

int main(){
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}} ;

    int n = matrix.size() ;
    int m = matrix[0].size() ;

    vector<vector<int>> ans = zeromatrix(matrix,n,m) ;

    for(auto it : ans){
        for(auto i : it){
            cout << i << " " ;
        }
        cout << endl;
    }
}

/*#include<iostream>
#include<vector>
using namespace std ;


vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {

    // int row[n] = {0}; --> matrix[..][0]
    // int col[m] = {0}; --> matrix[0][..]

    int col0 = 1;
    // step 1: Traverse the matrix and
    // mark 1st row & col accordingly:
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                // mark i-th row:
                matrix[i][0] = 0;

                // mark j-th column:
                if (j != 0)
                    matrix[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }

    // Step 2: Mark with 0 from (1,1) to (n-1, m-1):
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (matrix[i][j] != 0) {
                // check for col & row:
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    //step 3: Finally mark the 1st col & then 1st row:
    if (matrix[0][0] == 0) {
        for (int j = 0; j < m; j++) {
            matrix[0][j] = 0;
        }
    }
    if (col0 == 0) {
        for (int i = 0; i < n; i++) {
            matrix[i][0] = 0;
        }
    }

    return matrix;
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans = zeroMatrix(matrix, n, m);

    
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout  << endl;
    }
    return 0;
}*/

