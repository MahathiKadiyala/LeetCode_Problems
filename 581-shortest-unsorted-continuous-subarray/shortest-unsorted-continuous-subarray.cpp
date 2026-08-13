class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
         int n=nums.size();
         int l=0,r=n-1;
       while(l<n-1 && nums[l]<=nums[l+1]) l++;
       if(l==n-1) return 0;
       while(r>0 && nums[r]>=nums[r-1]) r--;
       int mini=INT_MAX,maxi=INT_MIN;
       for(int i=l;i<=r;i++){
        maxi=max(maxi,nums[i]);
        mini=min(mini,nums[i]);
       }
        while (l>0 && nums[l-1]>mini) l--;
        while (r<n-1 && nums[r+1]<maxi) r++;
        return r-l+1;
    }
};