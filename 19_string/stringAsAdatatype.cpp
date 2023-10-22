#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str = "pallavi sahu";
    cout<< str[0]<<endl;
     cout<< str<<endl;

     //input
     string s;
     cin>>s;            //only if the given string has no space no enter.
     cout<<s<<" ";

     // string input lana with space

     string name;
     getline(cin,name);
     cout<<name;

}