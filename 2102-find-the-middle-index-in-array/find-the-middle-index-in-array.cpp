class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>ps(n+1,0);
        for(int i=1;i<=n;i++){
            ps[i]=ps[i-1]+nums[i-1];
        }
        for(int i=0;i<ps.size()-1;i++){
           if(ps[i]==(ps[n]-ps[i+1])) return i;
        }
        return -1;
    }
};
// int n=nums.size();
//         vector<int>r;
//         for(int i=0;i<n;i++){
//             int m=i;
//             int sum1=0;
//             int sum2=0;
//             for(int j=0;j<m;j++)
//             {
//                sum1+=nums[j];
//             }
//             for(int j=m+1;j<n;j++)
//             {
//                 sum2+=nums[j];
//             }
//             if(sum1==sum2)
//             {
//                 r.push_back(m);
//             }
//         }
//         if (r.empty()) return -1; 
//         int res=*min_element(r.begin(),r.end());
//         return res;