//Write a C++ program to input any character and check whether it is the alphabet, digit or special
//character.

#include<iostream>
using namespace std;
int main() {
    char ch;
    cin>>ch;

    if((ch>='A' and ch<='Z') or (ch>='a' and ch<='z')){
        cout<<"Character is alphabet.";
    }
    else if(ch>'0' and ch<='9'){
        cout<<"Character is digit.";
    }
    else{
        cout<<"Character is special character.";
    }
}