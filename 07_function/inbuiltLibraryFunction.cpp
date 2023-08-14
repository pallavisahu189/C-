#include<iostream>
#include<cmath>
using namespace std;
int mini(int x, int y){
    int a;
    if(x<y) a=x;
    else a=y;
    return a;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<mini(65,98);
    // cout<<min(x,y)<<endl;
    // cout<<max(x,y)<<endl;
    cout<<sqrt(2);
}