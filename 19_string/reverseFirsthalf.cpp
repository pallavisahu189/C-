//input a string of even length and reverse the first half of all string.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s ;
    getline(cin, s);
    //reverse first half

    int len = s.length();
    reverse(s.begin(),s.end()+len/2);
    cout<<s;
}