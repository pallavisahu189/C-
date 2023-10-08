// write a program to display the element of middle row and the element of middle column of a 2D matrix.

// assuming the 2D array to be a square matrix with odd dimension i.e. 3*3, 5*5, 7*7

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Number of row: ";
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    // plus element

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==n/2 || j==n/2){
                cout<<a[i][j];
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    
}