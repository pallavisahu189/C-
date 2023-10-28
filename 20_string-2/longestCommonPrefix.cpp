//Input n string and write a program to find the longest common profix string of all the string.

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<string>v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");

    // lexographically - ascii order pr arrenge krta hai

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    sort(v.begin(),v.end());

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    string first = v[0];
    string last = v[v.size()-1];
    string s = "";

    for(int i=0; i<(min(first.size(),last.size())); i++){
        if(first[i] == last[i]){
            s += first[i];
        }
        //cout<< s;
    }
    cout<< s;

}