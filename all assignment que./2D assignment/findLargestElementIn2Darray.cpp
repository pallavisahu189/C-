//Write a C++ program to find the largest element of a given 2D array of integers.

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

    // max
    int max = INT_MIN;
    for(int i=0; i<=n-1; i++){  
        for(int j=0; j<=m-1; j++){ 
           if(max < arr[i][j]) max = arr[i][j];
        }
    }
    cout<<max;
}