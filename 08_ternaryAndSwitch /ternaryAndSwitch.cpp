#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    // if(x%2==0){
    //     cout<<"even";
    // }
    // else{
    //     cout<<"odd";
    // }

    //ternary operator:
    //condition ? true : false;

    (x%2==0) ? cout<<"even" : cout<<"odd";
}