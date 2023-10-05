//write a program to print matries in spiral from

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter row of matrix: ";
    cin>>m;
    int n;
    cout<<"Enter column of matrix: ";
    cin>>n;
    int arr[m][n];
        
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
           cin>>arr[i][j];
        }
    }
    cout<<endl;
    //spiral

    