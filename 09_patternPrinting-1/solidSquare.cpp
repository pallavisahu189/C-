// print the given pattern
//2*2 ya 3*3 ya 4*4
//**
//**

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter line number : ";
    cin>>a;
    for(int i=1; i<=a; i++){
        for(int j=1; j<=a; j++){
            cout<<"+";
    }
    cout<<endl;
}
}