class Solution {
public:
    string predictPartyVictory(string senate) {
        int n=senate.size();
        queue<int>q1,q2;
        for(int i=0;i<n;i++){
            if(senate[i]=='R') q1.push(i);
            else q2.push(i);
        }
        while(!q1.empty() && !q2.empty()){
            if(q1.front()<q2.front()){
                int s=q1.front();
                q2.pop();
                q1.pop();
                q1.push(s+n);
            }
            else {
                int s=q2.front();
                q1.pop();
                q2.pop();
                q2.push(s+n);
            }
        }
        if(q1.empty()) return "Dire";
        else return "Radiant";
    }
};