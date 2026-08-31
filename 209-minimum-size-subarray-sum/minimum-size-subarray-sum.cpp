class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int l=0,sum=0;
        int mini=INT_MAX;
        for (int r=0;r<n;r++) {
            sum+=nums[r];
            while(sum>=target) {
                mini=min(mini,r-l+1);
                sum-=nums[l];
                l++;
            }
        }
        return (mini==INT_MAX ?0:mini);
    }
};
//     int n=nums.size();
    //     int l=0;
    //     int mini=0;
    //    while(l<n){
    //     int s=nums[l];
    //     if(s>=target && (mini==0 || 1<mini)) mini=1;
    //     for(int r=l+1;r<n;r++){
    //         s+=nums[r];
    //         if(s>=target && (mini==0 || r-l+1<mini)) mini=r-l+1;
    //     }
    //     l++;
    //    }
    //    return mini;