class Solution {
public:
    int maximumLengthSubstring(string s) {
        int maxi=0;
        int l=0;
        map<char,int>m;
        for(int r=0;r<s.size();r++){
           m[s[r]]++;
           while(m[s[r]]>2){
            m[s[l]]--;
            l++;
           }
           maxi=max(maxi,r-l+1);
        }
        return maxi;
    }
};