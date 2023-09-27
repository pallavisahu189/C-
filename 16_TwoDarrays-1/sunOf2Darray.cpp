// Write a program to print sum of all the element of a 2D array

#include<iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter row number: ";
    cin>>n;
    int m;
    cout<<"Enter column number: ";
    cin>>m;

    int arr[n][m];
    for(int i=0; i<=n-1; i++){  
        for(int j=0; j<=m-1; j++){  
            cin>>arr[i][j];
        }
    }

    // sum

    int sum = 0;
    for(int i=0; i<=n-1; i++){  
        for(int j=0; j<=m-1; j++){ 
            sum += arr[i][j];
        }
    }
    cout<<sum;
}