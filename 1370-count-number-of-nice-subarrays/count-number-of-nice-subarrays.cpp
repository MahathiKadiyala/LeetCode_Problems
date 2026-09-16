class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>prefix(n+1,0); 
        for(int i=0;i<n;i++) {
            prefix[i+1]=prefix[i]+(nums[i]%2);
        }
    unordered_map<int,int> freq;
        int ans=0;
        for(int i=0;i<=n;i++) {
            if(freq.find(prefix[i]-k)!=freq.end()) {
                ans+=freq[prefix[i]-k];
            }
            freq[prefix[i]]++;
        }
        return ans;
    }
};