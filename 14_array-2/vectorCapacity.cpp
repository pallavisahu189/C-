#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;   

    v.push_back(6);
    cout<<v.capacity()<<endl;
    v.push_back(8);
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.capacity()<<endl;
    v.push_back(9);
    cout<<v.capacity()<<endl;
    v.push_back(7);
    cout<<v.capacity()<<endl;    // capacity , size ke anusar double hota jata h jb tk size me pura element br na jaye

    

    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<" "<<v[4]<<endl;
    

}