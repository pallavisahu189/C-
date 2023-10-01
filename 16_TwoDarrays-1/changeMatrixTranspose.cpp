// you are given a matrix / 2D array of size (n*n) change this matrix into its transpose.

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter nunber of rors/column: ";
    cin>>m;
    int arr[m][m];
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=m-1; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //printing

    for(int i=0; i<=m-1; i++){ //row
        for(int j=0; j<=m-1; j++){      //column
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // transpose in the same matrix
    for(int i=0; i<=m-1; i++){ 
        for(int j=i+1; j<=m-1; j++){      
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    //print
    for(int i=0; i<=m-1; i++){ //row
        for(int j=0; j<=m-1; j++){      //column
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

