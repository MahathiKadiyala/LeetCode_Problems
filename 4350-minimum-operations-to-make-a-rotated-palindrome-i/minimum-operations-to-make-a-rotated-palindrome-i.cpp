class Solution {
public:
    int minOperations(string s) {
       int n=s.size();
       int ans=INT_MAX;
       for(int r=0;r<s.size();r++){
        string t=s.substr(r)+s.substr(0,r);
        int c=0;
        for(int i=0;i<n/2;i++){
            int x=t[i]-'a';
            int y=t[n-1-i]-'a';
            int d=abs(x-y);
            c+=min(d,26-d);
        }
        ans=min(c+r,ans);
       }
        return ans;
    }
};