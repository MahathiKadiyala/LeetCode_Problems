class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt=0;
        unordered_map<int,int>m;
        m[0]++;
        int ps=0;
        for(int x:nums){
            ps+=x;
            int r=ps-k;
            if(m.find(r)!=m.end()) cnt+=m[r];
            m[ps]++;
        }
        return cnt;
         // vector<int>p(n+1,0);
        // for(int i=1;i<=n;i++){
        //     p[i]=p[i-1]+nums[i-1];
        // }
        // int cnt=0;
        // for(int i=0;i<p.size();i++){
        //     for(int j=i+1;j<p.size();j++){
        //         if((p[j]-p[i])==k) cnt++;
        //     }
        // }
        //return cnt;
    }
};
// for(int i=0;i<n;i++){
        //     p[i+1]=p[i]+nums[i];
        // }