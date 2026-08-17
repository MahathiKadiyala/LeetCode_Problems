class Solution {
public:
    int minPenalty(int period, vector<int>& l, vector<int>& a) {
       sort(l.begin(),l.end());
       int ans=0;
       for(auto x:a){
         int r=x%period;
         if(r<l[l.size()-1]) continue;
         else {
           ans=max(ans,period-r);
         }
       }
       return ans;
    }
};