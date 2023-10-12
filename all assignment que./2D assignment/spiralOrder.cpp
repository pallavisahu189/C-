//Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.

//user se row no. input lena

// n=5
// 1 2  3  4  5
// 16 17 18 19 6
// 15 24 25 20 7
// 14 23 22 21 8
// 13 12 11 10 9   

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
     
     int i=0, k=1;

     while(k <= n*n){
        //left to roght
        int j = i;
        while(j < n-i){
            a[i][j++] = k++;
        }

        //top to bottom
        j = i + 1;
        while(j < n-i){
            a[j++][n-i-1] = k++;
        }

        //right to left
        j = n-i-2;
        while(j>i){
            a[n-i-1][j--] = k++;
        }

        //bottom to top
        j = n-i-1;
        while(j > i){
            a[j--][i] = k++;
        }
        i++;
    }
    //print the spirL Matrix

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}