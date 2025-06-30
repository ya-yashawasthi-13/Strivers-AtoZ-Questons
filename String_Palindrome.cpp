#include<iostream>
#include<string>
using namespace std ;

bool ispalindrome(string s){
    string clean = "" ;

    for(char c : s){
        if(isalnum(c)){
            clean += tolower(c) ;
        }
    }
    string reversed = clean ;
    reverse(reversed.begin() , reversed.end()) ;
    return clean == reversed ;
}

int main(){
    string s ;
    cout << "Enter a string : " ;
    cin >> s ;

    if(ispalindrome(s)){
        cout << "Palindrome" << endl ;
    }else{
        cout<< "Not Palindrome" << endl ;
    }

}