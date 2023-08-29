#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(5);    // jb vector ka size diya h tb input lena 
    for(int i=0; i<5; i++){
        cin>>v[i];
    }

    for(int i=0; i<5; i++){
        cout<<v[i]<<" ";
    }

}