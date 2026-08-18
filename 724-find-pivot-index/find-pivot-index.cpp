class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>ps(n+1,0);
        for(int i=1;i<=n;i++){
            ps[i]=ps[i-1]+nums[i-1];
        }
        for(int i=0;i<ps.size()-1;i++){
           if(ps[i]==(ps[ps.size()-1]-ps[i+1])) return i;
        }
        return -1;
    }
};