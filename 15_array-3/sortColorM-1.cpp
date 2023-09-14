//sort the array of 0's , 1's and 2's 
//leetcode - 75

#include<iostream>
#include<vector>
using namespace std;
void sortColors(vector<int>& nums){
    // two pass solution

    int n = nums.size();
    int noz = 0;
    int noo = 0;
    int noftwo = 0;

    for(int i=0; i<n; i++){
        if(nums[i]==0) noz++;
        else if (nums[i]==1) noo++;
        else noftwo++;
    }
    //fill

    for(int i=0; i<n; i++){
        if(i<noz) nums[i]=0;
        else if(i<(noz+noo)) nums[i]=1;
        else nums[i]=2;
    }
    return;
}

int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);

    for(int i=0; i<v.size(); i++){
        cout<<v[i];
    }
    cout<<endl;

    sortColors(v);

    for(int i=0; i<v.size(); i++){
        cout<<v[i];
    }
    cout<<endl;

}