//Write a program to add two matrices and save the result in one of the given matrices.

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter row of matrix: ";
    cin>>m;
    int n;
    cout<<"Enter column of matrix: ";
    cin>>n;
    cout<<"Enter element of 1st matrix: ";
    if(m==n){
        int a[m][n];
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j];
            }
        }

        int b[m][n];
        cout<<"Enter element of 2nd matrix: ";
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>>b[i][j];
            }
        }
        // sum

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                a[i][j] = a[i][j] + b[i][j];
            }
        }
        cout<<"sum od 2D matrix: ";
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cout<<a[i][j]<<" ";
            }
        }

    }
    else{
        cout<<"the matrices cannot be sum";
    }
}
    