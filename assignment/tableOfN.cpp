// print the table of n is an integer which the user will input.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter table of: ";
    cin>>n;
    for(int i=n; i<=n*10; i=i+n){
        cout<<i<<endl;
    }
}