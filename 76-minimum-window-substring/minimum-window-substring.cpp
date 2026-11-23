class Solution {
public:
    string minWindow(string s, string t) {
        if (s.size() < t.size()) return "";
        unordered_map<char,int> mp;
        for (char ch : t) mp[ch]++;
        int i=0;
        int cnt=t.size();
        int mini=INT_MAX;
        int start=0;
        for (int j=0;j<s.size();j++){
            if (mp[s[j]]>0) {
                cnt--;
            }
            mp[s[j]]--;
            while(cnt==0){
                if (j-i+1<mini) {
                    mini=j-i+1;
                    start=i;
                }
                mp[s[i]]++;
                if (mp[s[i]] > 0) {
                    cnt++;
                }
                i++;
            }
        }
        if (mini==INT_MAX) return "";
        return s.substr(start,mini);
    }
};