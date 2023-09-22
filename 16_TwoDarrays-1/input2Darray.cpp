#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter row number: ";
    cin>>n;
    int m;
    cout<<"Enter column number: ";
    cin>>m;

    int arr[n][m];
    for(int i=0; i<=n-1; i++){  // i is row
        for(int j=0; j<=m-1; j++){   // j is column
            cin>>arr[i][j];
        }
    }

    // print
    for(int i=0; i<=n-1; i++){  // i is row
        for(int j=0; j<=m-1; j++){   // j is column
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}