//1
//AB
//123
//ABCD
//12345

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){ 
            if(i%2!=0)cout<<j<<" ";
            else cout<<char(j+'A'-1)<<" ";
       }
       cout<<"\n";
    }
}