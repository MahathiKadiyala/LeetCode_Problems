class Solution {
public:
    bool is_vowel(char c){
        string s="aeiouAEIOU";
        return s.find(c)!=string::npos;
    }
    int maxVowels(string s, int k) {
        int maxi=0;
        int cnt=0;
        for(int i=0;i<k;i++){
            if(is_vowel(s[i])) cnt++;
        }
        maxi=max(maxi,cnt);
        for(int i=k;i<s.size();i++){
            if(is_vowel(s[i])) cnt++;
            if(is_vowel(s[i-k])) cnt--;
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};