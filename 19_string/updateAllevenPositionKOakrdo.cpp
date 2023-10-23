//Q. input a string of size n and update all the even position in the string to 
// character 'a' consider o-based indexing

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin, str);
    cout<<str<<endl;

    for(int i=0; str[i] !='\0'; i++){
        if(i%2==0) str[i]='a';
    }
    cout<<str<<endl;
}