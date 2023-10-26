// sorting a string using in buit function

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>> s;
    sort(s.begin(),s.end());
    cout<<s;
}