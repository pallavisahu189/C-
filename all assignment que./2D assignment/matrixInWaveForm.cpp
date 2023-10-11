//write a program to print the matrix in wave form.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter row of matrix: ";
    cin>>n;
    int m;
    cout<<"Enter column of matrix: ";
    cin>>m;
    int arr[n][m];
        
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
           cin>>arr[i][j];
        }
    }
    cout<<endl;

    //starting down to top cloumn wave print

    for(int j=0; j<m; j++){
        if(j%2==0){
            for(int i=n-1; i>=0; i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=0; i<n; i++){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}