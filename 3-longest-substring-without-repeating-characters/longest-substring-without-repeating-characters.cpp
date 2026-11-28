class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     int maxi=0;
     unordered_map<char,int>m;
     int l=0;
     for(int r=0;r<s.size();r++){
        m[s[r]]++;
        while(m[s[r]]>1){
            m[s[l]]--;
            l++;
        }
        maxi=max(maxi,r-l+1);
     }
     return maxi;
    }
};