//sort the array of 0's , 1's and 2's 
//leetcode - 75

#include<iostream>
#include<vector>
using namespace std;
//3 ppointer algorithm
//Dutch flag algorithm

void sortColors(vector<int>& nums){
    // one pass solution

    int low = 0;
    int mid = 0;
    int high = nums.size()-1;

    //mid ke baare me sochna
    //0 to low-1 ->  0
    //high+1  to end ->  2
    //low to mid-1  ->  1

    while(mid<=high){
        if(nums[mid]==2){
            int temp = nums[mid];
            nums[mid] = nums[high];
            nums[high] = temp;
            high--;

        }
        else if(nums[mid]==0){
            int temp = nums[mid];
            nums[mid] = nums[low];
            nums[low] = temp;
            low++;
            mid++;
        }
        else mid++;
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
        cout<<v[i]<<" ";
    }
    cout<<endl;

    sortColors(v);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

}