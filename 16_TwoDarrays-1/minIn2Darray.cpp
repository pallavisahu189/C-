// write a c++ program to find the smallest element of a given 2D array of integers'

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

    // min

    int min = INT_MAX;
    for(int i=0; i<=n-1; i++){  
        for(int j=0; j<=m-1; j++){ 
           if(min > arr[i][j]) min = arr[i][j];
        }
    }
    cout<<min;
}