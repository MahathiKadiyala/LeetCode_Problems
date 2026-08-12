class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int maxi=INT_MIN;
        int l=0;
        map<int,int>m;
        for(int r=0;r<nums.size();r++){
           m[nums[r]]++;
           while(m[nums[r]]>k){
            // if(nums[l]==nums[r])
              m[nums[l]]--;
            if(m[nums[r]]==0) m.erase(nums[r]);
            l++;
           }
           maxi=max(maxi,r-l+1);
         }
         return maxi;
    }
};