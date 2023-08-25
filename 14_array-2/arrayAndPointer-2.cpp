#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,4,6};
    int* ptr = &arr[0];
    cout<<ptr<<endl;
    ptr[0] = 8;
                 //*ptr[0] = 8;  bhi likh skte h
    for(int i=0; i<=3; i++){
        cout<<ptr[i]<<" ";
    }
}