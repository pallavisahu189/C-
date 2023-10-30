#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter string number: ";
    getline(cin,str);
    int x = stoi(str);
    cout<<x<<endl;
}