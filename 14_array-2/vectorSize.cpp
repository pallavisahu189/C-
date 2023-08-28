#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;   

    v.push_back(6);
    cout<<v.size()<<endl;
    v.push_back(8);
    cout<<v.size()<<endl;
    v.push_back(5);
    cout<<v.size()<<endl;
    v.push_back(9);
    cout<<v.size()<<endl;
    v.push_back(7);
    cout<<v.size()<<endl;    // vector me kittna element hai vo uska size hota hai

    

    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<" "<<v[4]<<endl;
    

}