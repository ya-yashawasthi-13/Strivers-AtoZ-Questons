/*#include<iostream>
#include<set>
#include<vector>
using namespace std ;

int main(){

vector<int> arr = {1,4,3,5,3} ;

int n = arr.size() ;

sort(arr.begin(),arr.end()) ;

set <int> s ;

for(auto i : arr){
    s.insert(i) ;
}

for(auto i : s){
    cout << i << " " ;
}
}*/
/*#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 6, 9, 4};

    sort(arr.begin(), arr.end());
    int larg = arr.back();
    cout << "Largest is : " << arr.back() << endl;

    int slarg = -1;

    for (auto i : arr)
    {
        if (slarg < i && i < larg)
        {
            slarg = i;
        }
    }

    cout << "Second Largest : " << slarg << endl;
}*/
/*#include <iostream>
#include <vector>
using namespace std;

bool issorted(vector<int> arr, int n)
{
    vector<int> temp = arr;
    sort(arr.begin(), arr.end());

    for (auto i : arr)
    {
        if (arr[i] == temp[i])
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{

    vector<int> arr = {0, 3, 5, 3, 6, 3, 2, 5};
    int n = arr.size();

    issorted(arr, n);

    if (issorted(arr, n))
    {
        cout << "Sorted" << endl;
    }
    else
    {
        cout << "Not Sorted" << endl;
    }

    return 0;
}*/
/*#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {
        1,
        2,
        3,
        4,
        5,
    };

    int n = arr.size();

    int temp = arr[0];

    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }

    arr[n - 1] = temp;

    for (auto i : arr)
    {
        cout << i << " ";
    }
}*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    vector<int> temp(6, 0);
    int n = arr.size();
    int d = 3;
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    for (int i = 0; i < d; i++)
    {
        arr[n - d + i] = temp[i];
    }
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}
