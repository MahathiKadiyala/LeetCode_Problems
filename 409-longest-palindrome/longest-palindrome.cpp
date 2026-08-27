class Solution {
public:
    int longestPalindrome(string s) {
       map<char,int>m;
       for(char c:s) m[c]++;
       int cnt=0;
       bool b=0;
       for(auto &p:m){
            cnt+=(p.second/2)*2;
            if(p.second%2==1) b=1;
        }
        if(b) cnt++;
        return cnt;
    }
};