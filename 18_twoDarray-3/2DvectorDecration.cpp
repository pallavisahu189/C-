#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5,2);
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    cout<<v[4]<<" ";

    vector <vector<int> > v1(3,vector<int>(4,2));
    cout<<v.size()<<endl;
    cout<<v1[2][2];
     for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
     }
     cout<<endl;
     cout<<v1.size()<<endl;
     cout<<v1[1].size();
}