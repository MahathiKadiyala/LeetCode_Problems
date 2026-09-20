class Solution {
public:
    int reverseDegree(string s) {
    int ans=0,pos=1;
    for(char c:s) {
        ans+=(26-(c-'a'))*pos++;
    }
    return ans;
    }
};