// Ques : Print the given pattern

// *        *
//   *    *
//     *
//   *    *
// *        *

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter row odd number : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==j || i+j==n+1)cout<<"*";
            else cout<<" ";

        }
        cout<<endl;
    }
}