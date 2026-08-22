class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int even=0;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int cnt=0;
            while(n>0)
            {
                int d=n%10;
                cnt++;
                n/=10;
            }
            if(cnt%2==0)
            {
                even++;
            }
        }
        return even;
    }
};