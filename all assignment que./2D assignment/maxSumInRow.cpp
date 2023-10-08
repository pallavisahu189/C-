// write a program to print the row number having the maximum sum in a matrix

#include<iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter row of matrix: ";
    cin>>n;
    int m;
    cout<<"Enter column of matrix: ";
    cin>>m;
    cout<<"Enter element of matrix: ";
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    int index = -1, maximum = INT_MIN;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<m; j++){
            sum += a[i][j];
        }
        if(maximum<sum){
            maximum = sum;
            index = i;
         }
    }
    cout<<"The row with maximum "<<index + 1 <<endl;
}
