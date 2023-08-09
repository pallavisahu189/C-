//Take 3 positive integers input and print the greatest of them


#include<iostream>
using namespace std;
int main(){
    cout<<"Enter 1st number : ";
    int a,b,c;
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    cout<<"Enter 3rd number : ";
    cin>>c;
    if(a>b && a>c){
        cout<<a<<" is greatest";
    }
    if(b>a && b>c){
        cout<<b<<" is greatest";
    }
    if(c>a && c>b){
        cout<<c<<" is greatest";
    }
    
}