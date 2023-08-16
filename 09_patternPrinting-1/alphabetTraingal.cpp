//A 
//A B
//A B c
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter row number : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<"\n";
    }
}