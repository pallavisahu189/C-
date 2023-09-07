//find the last occurrence of x in the arrray.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(5);
    v.push_back(4);
    v.push_back(9);
    v.push_back(6);
    v.push_back(5);
    v.push_back(7);

    int x = 5;
    int idx = -1;

    // for(int i=0; i<v.size(); i++){
    //     if(v[i]==x) {
    //         idx=i;
    //     }
    // }
    // cout<<idx;


    // methode - 2

    for(int i=v.size()-1; i>=0; i--){
        if(v[i]==x){
            idx = i;
            break;
        }
    }
    cout<<idx<<endl;

}