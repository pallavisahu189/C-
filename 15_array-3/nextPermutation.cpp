// find the next permutations of array
// note :- if not possible then print the sorted order in ascending order.
// leetcode(31)

// PROGRAM KO ACCHE SE OR SOLVE KRNA H AABHI

void nextPermutation(vector<int>& nums){
    int n = nums.size();
    //step 1 - finding pivot index

    int idx = -1;
    for(int i= n-2; i>=0; i--){
        if(nums[i]<nums[i+1]){
            idx = i;
            break;
        }
    }
    if(idx == -1){ // if array is already greatest
        reverse(nums.begin(),nums.end());
        return;
    }
    // step 2 :- sorting / reverse after pivot

    reverse(nums.begin() + idx+1, nums.end());

    // step 3 :- finding the just greatest element than idx

    int j = -1;
    for(int i = idx+1; i<n; i++){
        if(nums[i]>nums[idx]){
            j = i;
            break;
        }
    }
    // step  4 :- swaping idx and j.

    int temp = nums[idx];
    nums[idx] = nums[j];
    nums[j] = temp;
    return;
    
    
}

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(5);
    v.push_back(3);
    for(int i=0; i<v.size(); i++){
        cout<<v[i];
    }
    cout<<endl;

    nextPermutation(v);

    for(int i=0; i<v.size(); i++){
        cout<<v[i];
    }
    cout<<endl;


}