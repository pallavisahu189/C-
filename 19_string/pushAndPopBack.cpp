#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "abcd";
    cout<<str<<endl;
    str.push_back('e');     //push_back se singl char ko puch kr skte h
    cout<<str<<endl;

    //last ke char ko htane ke liye pop_back use krte h

    string s = "pallavi";
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
}