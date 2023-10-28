//string to integer -- stoi
//string to long long -- stoll

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "123456";
    int x = stoi(str);
    cout<<x<<endl;

    int a = 123456;
    string s = to_string(a);
    cout<<a<<endl;

    string strings = "12453698754656";
    long long xx = stoll(strings);
    cout<<xx;
}