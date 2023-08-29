#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;    // jb vector ka size nhi diya h tb input lena 
    for(int i=0; i<v.size(); i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

}