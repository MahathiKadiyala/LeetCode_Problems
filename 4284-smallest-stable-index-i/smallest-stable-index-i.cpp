class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
       for(int i=0;i<n;i++){
        int maxi=INT_MIN;
        int mini=INT_MAX;
          int in=0;
          int ind=i;
          while(in<=i){
            maxi=max(maxi,nums[in]);
            in++;
          }
          while(ind<=n-1){
            mini=min(mini,nums[ind]);
            ind++;
          }
          if(maxi-mini<=k) {
            return i;
          }
       }
       return -1;
    }
};