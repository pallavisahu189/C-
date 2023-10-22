//input a string of length n and count all the vowel in the given string.

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "pallavi sahu";
    int count = 0;
    int i = 0;
    while(str[i] != '\0'){
        if (str[i]=='a' || str[i]=='e' || str[i]=='o' || str[i]=='i' || str[i]=='u' ) count++;
        cout<<str[i];
        i++;
    }
    cout<<count;
}