// Ques : Find the second largest element in the given
// Array.

#include<iostream>
#include<climits>
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

    //int max = arr[0];
    int max = INT_MIN;
    for(int i=0; i<=n-1; i++){
        if(max<arr[i]) max = arr[i];
    }

    int smax = INT_MIN;
     for(int i=0; i<=n-1; i++){
        if(arr[i]!=max && smax<arr[i]) smax = arr[i];
    }

    cout<<max<<endl;
    cout<<smax;
}
