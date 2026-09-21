class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       //next_permutation(nums.begin(),nums.end()); 
        int n=nums.size();
        int i=n-2;
    while(i>=0 && nums[i]>=nums[i+1]){ // find pivot
        i--;
    }
    if(i>=0){
        int j=n-1;
        while(nums[j]<=nums[i]) {  // find successor
            j--;
        }
        swap(nums[i], nums[j]);
    }
    reverse(nums.begin()+i+1,nums.end());
    }
};