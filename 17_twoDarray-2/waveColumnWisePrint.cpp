//Write a program to print the matrix in wave form.
//      1 2 3
//      4 5 6
//      7 8 9

//output :-  1 4 7 8 5 2 3 6 9


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

    //wave print - column wase

    for(int j=0; j<n; j++){
        for(int i=0; i<m; i++){
            cout<<arr[i][j]<<" ";
        }
    }  
}