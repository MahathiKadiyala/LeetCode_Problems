class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    //     long long res=0,mx=LLONG_MIN;
    //     for(int i=0;i<nums.size();i++){
    //         res+=nums[i];
    //         if(res>mx) mx=res;
    //         if(res<0) res=0;
    //     }
    //   return mx;
    // }
    int maxsum=nums[0],curr=nums[0];
    for(int i=1;i<nums.size();i++){
        curr=max(nums[i],curr+nums[i]);
        maxsum=max(curr,maxsum);
    }
    return maxsum;
    }
};