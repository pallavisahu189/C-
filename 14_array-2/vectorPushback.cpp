#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;   // 0 size ka ek vector bna hai

    v.push_back(6);
    v.push_back(8);
    v.push_back(5);
    v.push_back(9);
    v.push_back(7);

    v[0]=10;

    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl;

}