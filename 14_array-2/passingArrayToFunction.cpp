#include<iostream>
using namespace std;
void display(int a[]){
    for(int i=0; i<=4; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void change(int b[]){
    b[0] = 100;
}
int main(){
    int arr[5] = {1,5,4,8,9};
    //accessing the element of array in another function
    //updation, pass by value / reference ?

    display(arr);
    change (arr);
    display(arr);
}
    
