class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
         int cnt=0,maxi=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                cnt++;
                maxi=max(maxi,cnt);
            }
            else cnt =0;
        }
        return maxi;
    //      vector<int>result;
    //      int cnt=0;
    //     for(int i=0;i<nums.size();i++){
    //      if(nums[i]==1){ 
    //      cnt++;
    //      }
    //      else
    //      {
    //         result.push_back(cnt);
    //         cnt=0;
    //      }
    //    } 
    //    result.push_back(cnt);
    //    int max=*max_element(result.begin(),result.end());
    //    return max;
    }
};