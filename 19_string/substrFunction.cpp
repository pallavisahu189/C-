// input a string of even length and return the second half of the string using inbuilt substr function.

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str ;
    cout<<"Enter a string: ";
    getline(cin, str);
    //abcdefgh - n=8

    int n = str.length();
    cout<<str.substr(n/2);
}