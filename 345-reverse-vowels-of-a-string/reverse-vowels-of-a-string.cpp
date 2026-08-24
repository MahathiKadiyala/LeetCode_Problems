class Solution {
public:
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        string v="aeiouAEIOU";
        while(i<j){
            if(v.find(s[i])!=string::npos && v.find(s[j])!=string::npos){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(v.find(s[i])==string::npos) i++;
            else j--;
        }
        return s; 
    }
};