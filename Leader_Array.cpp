#include<iostream>
#include<string>
using namespace std;

int main(){
    vector<int> arr = {10,22,12,3,0,6} ;
    vector<int> leaders ;
    int n = arr.size() ;

    for(int i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j <= n ; j++){
            if(arr[i] < arr[j]){
                break ;
            }else if(j == n){
                leaders.push_back(arr[i]) ;
                break ;
            }
        }
    }

    for(auto i : leaders){
        cout << i << " " ;
    }
    cout << endl ;
    return 0 ;
}