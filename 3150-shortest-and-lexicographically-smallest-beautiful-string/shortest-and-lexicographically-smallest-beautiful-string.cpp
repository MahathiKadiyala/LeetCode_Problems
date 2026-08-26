class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int cnt=0;
        int l=0;
        string ans="";
        for(int r=0;r<s.size();r++){
             if(s[r]=='1') cnt++;
             while(cnt>=k){
                if(cnt==k){
                    string res=s.substr(l,r-l+1);
                    if(ans.empty() || res.size()<ans.size() || (res.size()==ans.size() && res<ans)) ans=res;
                }
                if(s[l]=='1') cnt--;
                l++;
             }
        }
       return ans;
    }
};