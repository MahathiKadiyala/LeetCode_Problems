// class Solution {
// public:
//     int numberOfSubarrays(vector<int>& nums, int k) {
//         int n=nums.size();
//         vector<int>prefix(n+1,0); 
//         for(int i=0;i<n;i++) {
//             prefix[i+1]=prefix[i]+(nums[i]%2);
//         }
//     unordered_map<int,int> freq;
//         int ans=0;
//         for(int i=0;i<=n;i++) {
//             if(freq.find(prefix[i]-k)!=freq.end()) {
//                 ans+=freq[prefix[i]-k];
//             }
//             freq[prefix[i]]++;
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int atmost(vector<int>& nums, int k) {
        int odd=0;
        int l=0;
        int count=0;

        for(int r=0;r<nums.size();r++){
            if(nums[r]%2 != 0) odd++;

            while(odd > k){
                if(nums[l]%2 != 0) odd--;

                l++;
            }

            count+=r-l+1;
        }
return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }
};