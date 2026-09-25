class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 1; i <= n; i++) {
            if (s.find(i) == s.end()) return i;
        }
        return n + 1;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     while(nums[i]>0 && nums[i]<=n && nums[nums[i]-1]!=nums[i]){
        //         swap(nums[i],nums[nums[i]-1]);
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     if(nums[i]!=i+1) return i+1;
        // }
        // return n+1;
    }
};