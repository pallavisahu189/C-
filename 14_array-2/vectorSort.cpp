#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(5);
    v.push_back(4);
    v.push_back(6);
    v.push_back(3);
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
}