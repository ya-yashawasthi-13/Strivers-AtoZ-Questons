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
