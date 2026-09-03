class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int e=0,o=0;
        int mini=INT_MAX;
        int n=nums1.size();
        for(int x:nums1){
            if(x%2){
                o++;
                mini=min(mini,x);
            }
            else e++;
        }
        if(e==n || o==n) return true;
        if(e==0 || o==0) return true;
        for(int x:nums1){
            if(x%2==0){
                if(x<=mini) return false;
            }
        }
        return true;
    }
};