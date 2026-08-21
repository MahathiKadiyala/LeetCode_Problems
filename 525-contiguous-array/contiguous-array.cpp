class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>fi;
        int sum =0,maxi=0;
        fi[0]=-1;
        for(int r=0;r<n;r++){
            sum +=(nums[r]==0 ?-1:1);
            if(fi.find(sum) != fi.end()){
                maxi = max(maxi, r-fi[sum]);
            } else {
                fi[sum] = r;
            }
        }
        // int n = nums.size();
        // int maxi = 0;
        // for(int l=0; l<n; l++){
        //     int sum = 0;
        //     for(int r=l; r<n; r++){
        //         sum += (nums[r] == 0 ? -1 : 1);
        //         if(sum == 0){
        //             maxi = max(maxi, r - l + 1);
        //         }
        //     }
        // }
         return maxi;
    }
};
 //   int maxi=INT_MIN;
    //   int z=0,o=0;
    //   int l=0;
    //   for(int r=0;r<nums.size();r++){
    //      if(nums[r]==0) z++;
    //      else o++;
    //      if(z==o){
    //         maxi=max(maxi,r-l+1);
    //         if(nums[l]==0) z--;
    //         else o--;
    //         l++;
    //      }
    //      maxi=max(maxi,r-l+1);
    //   }
    //   reverse(nums.begin(),nums.end());
    //   z=0,o=0;
    //   l=0;
    //   for(int r=0;r<nums.size();r++){
    //      if(nums[r]==0) z++;
    //      else o++;
    //      if(z==o){
    //         maxi=max(maxi,r-l+1);
    //         if(nums[l]==0) z--;
    //         else o--;
    //         l++;
    //      }
    //      maxi=max(maxi,r-l+1);
    //   }
    //   return maxi;