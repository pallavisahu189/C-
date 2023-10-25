#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "abcdef";
    //s.substr(ind) ->  us index se baki piche ke sare charstring print ho jayrga

    cout<<s.substr(4)<<endl;

    string t = "abcdef";
    //s.substr(ind,len)
    cout<<t.substr(1,3)<<endl;
}
    