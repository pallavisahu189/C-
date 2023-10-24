#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "abc";
    cout<<str<<endl;
    string s = "pqr";
    str = str + s;
    cout<<str<<endl;

    //add
    string p = "xyz";
    p = p+"abc";
    cout<<p<<endl;
    p = "abc"+p;
    cout<<p<<endl;
}