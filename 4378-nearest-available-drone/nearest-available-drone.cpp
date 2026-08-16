class Solution {
public:
    int nearestDrone(vector<vector<int>>& d, vector<int>& t) {
        int mini=INT_MAX;
        int md=INT_MAX;
        for(int i=0;i<d.size();i++){
            int m_d=abs(t[0]-d[i][0])+abs(t[1]-d[i][1]);
            if(m_d<=d[i][2]){
                if(m_d<md){
                  md=m_d;
                  mini=i;
                }
                else{
                    mini=min(mini,i);
                }
            }
        }
        if(mini==INT_MAX) return -1;
        else return mini;
    }
};