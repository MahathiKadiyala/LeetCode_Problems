class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        map<int,int>m;
        for(int x:nums) m[x]++;
        int maxi=INT_MIN;
        for(auto x:m){
            if(x.second==1 && x.first>maxi) maxi=x.first;
        }
        if(k==nums.size()) return *max_element(nums.begin(),nums.end());
        if(k>1){
            if(m[nums[0]]==1 && m[nums[nums.size()-1]]==1) return max(nums[0],nums[nums.size()-1]);
            if(m[nums[0]]==1 && m[nums[nums.size()-1]]!=1) return nums[0];
            if(m[nums[0]]!=1 && m[nums[nums.size()-1]]==1) return nums[nums.size()-1];
        }
        else if(k==1){
            if(maxi!=INT_MIN) return maxi;
        }
        return -1;
    }
};