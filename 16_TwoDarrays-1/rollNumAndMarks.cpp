//Write a program to store roll number and marks obtained student 
//side by side in a matrix.

#include<iostream>
using namespace std;
int main(){
    // roll number, marks
    // 4 students

    int arr[2][4];
    for(int i=0; i<=1; i++){  // i is row- roll , marks
        for(int j=0; j<=3; j++){  
            cin>>arr[i][j];
        }
    }

    // print
    for(int i=0; i<=1; i++){  // i is row
        for(int j=0; j<=3; j++){   // j is column
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}