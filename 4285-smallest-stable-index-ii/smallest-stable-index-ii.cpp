class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
       int n=nums.size();
       vector<int>pm(n);
       vector<int>ps(n);
       pm[0]=nums[0];
       ps[n-1]=nums[n-1];
       for(int i=1;i<n;i++){
          pm[i]=max(pm[i-1],nums[i]);
       }
       for(int i=n-2;i>=0;i--){
        ps[i]=min(ps[i+1],nums[i]);
       }
       for(int i=0;i<n;i++){
        if(pm[i]-ps[i]<=k) return i;
       }
       return -1;
    }
};