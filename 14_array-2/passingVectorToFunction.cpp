#include<iostream>
#include<vector>
using namespace std;

void change(vector<int>a){
    a[0]=100;
    for(int i=0; i<a.size(); i++){   // ye pass by value hai 
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>v;
    v.push_back(5);
    v.push_back(6);
    v.push_back(4);
    v.push_back(8);
    v.push_back(3);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    change(v);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}