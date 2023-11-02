// input array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    //input
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    //print
    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<<endl;
    }
}

