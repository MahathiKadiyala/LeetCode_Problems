class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> mp; 
    for(int i=0; i<nums.size(); i++) {
        int c= target - nums[i];
        if(mp.find(c)!= mp.end()) {
            return {mp[c], i};
        }
        mp[nums[i]]=i;
    }
    return {};
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return {};
    }
};