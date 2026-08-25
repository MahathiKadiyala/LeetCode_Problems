class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
       vector<vector<int>>ans(2);
       map<int,int>m;
       map<int,int>m1;
       for(auto &p:matches){
        m[p[1]]++;
       }
       for(auto &p:m){
        if(p.second==1) 
        ans[1].push_back(p.first);
       }
       for(auto &p:matches){
        if(m[p[0]]==0) m1[p[0]]++;
       }
       for(auto &p:m1){
        ans[0].push_back(p.first);
       }
       return ans;
     }
};
//unordered_map<int,int> mp; // player,lostcount
        // vector<vector<int>> ans(2);
        // for(auto i:matches){
        //     if(mp.find(i[0])==mp.end()){
        //         mp[i[0]]=0;
        //     }
        //     mp[i[1]]++;
        // }
        // for(auto i:mp){
        //     if(i.second==0){
        //         ans[0].push_back(i.first);
        //     }
        //     if(i.second==1){
        //         ans[1].push_back(i.first);
        //     }
        //     else{
        //         continue;
        //     }
        // }
        // sort(ans[0].begin(),ans[0].end());
        // sort(ans[1].begin(),ans[1].end());
        // return ans;