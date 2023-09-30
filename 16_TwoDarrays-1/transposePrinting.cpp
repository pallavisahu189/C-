//write a program to print the transpose of the matrix entered by the user and store it in a new matrix.

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter row no.: ";
    cin>>m;
    int n;
    cout<<"Enter colunm no.: ";
    cin>>n;
    int arr[m][n];
    for(int i=0; i<=m-1; i++){
        for(int j=0; j<=n-1; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //printing

    for(int i=0; i<=m-1; i++){ //row
        for(int j=0; j<=n-1; j++){      //column
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //printing transpose- column wise printing

    for(int j=0; j<n; j++){
        for(int i=0; i<m; i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}