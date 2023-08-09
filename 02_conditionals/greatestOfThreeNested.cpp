//Take 3 positive integers input and print the greatest of them.

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a 1st number : ";
    int a,b,c;
    cout<<"Enter a 1st number : ";
    cin>>a;
    cout<<"Enter a 2nd number : ";
    cin>>b;
    cout<<"Enter a 3rd number : ";
    cin>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is greatest";
        }
        else{
            cout<<c<<" is greatest";
        }
    }
    else{
        if(b>c){
            cout<<b<<" is greatest";
        }
        else{
            cout<<c<<" is greatest";
        }
    }

}