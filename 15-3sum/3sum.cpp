class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int j=i+1,k=nums.size()-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0){
                    res.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                else if(nums[i]+nums[j]+nums[k]<0){
                    j++;
                }
                else k--;
            }
        }
        vector<vector<int>>ans(res.begin(),res.end());
        return ans;
    }
};