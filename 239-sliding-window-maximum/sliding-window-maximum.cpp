class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        deque<int>dq;
        for(int i=0;i<k;i++){
            while(!dq.empty() && nums[dq.back()]<nums[i]){
            dq.pop_back();
            }
            dq.push_back(i);
        }
        ans.push_back(nums[dq.front()]);
        for(int i=k;i<nums.size();i++){
            if(dq.front()==i-k){
                dq.pop_front();
            }
            while(!dq.empty()&& nums[dq.back()]<nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
            ans.push_back(nums[dq.front()]);
        }
        return ans;
        // for(int i=0;i<nums.size()-k+1;i++){
        //   int maxi=0;
        //      for(int j=i;j<i+k;j++){
        //         maxi=max(maxi,nums[j]);
        //      }
        //      ans.push_back(maxi);
        // }   
        //return ans;
 }
};