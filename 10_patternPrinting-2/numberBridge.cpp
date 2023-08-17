//1234567
//123 456
//12   34
//1     2

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    for(int i=1; i<=2*n-1; i++){
        cout<<i;
    }
    cout<<endl;

    int m = n-1;
    int nsp = 1;

    for(int i=1; i<=m; i++){
        //number
        int a = 1;
        for(int j=1; j<=m+1-i; j++){
            cout<<a;
            a++;
        }
        //space
        for(int k=1; k<=nsp; k++){
            cout<<" ";
        }
        nsp+=2;
        //number
        for(int j=1; j<=m+1-i; j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}