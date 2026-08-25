class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>diff(n+2,0);
        for(auto &b:bookings){
            int l=b[0];
            int r=b[1];
            int s=b[2];
            diff[l]+=s;
            diff[r+1]-=s;
        }
        vector<int>res(n);
        int s=0;
        for(int i=1;i<=n;i++){
            s+=diff[i];
            res[i-1]=s;
        }
        return res;
        // vector<int>res(n,0);
        // int ans=0;
        // for(auto &b:bookings){
        //     int l=b[0];
        //     int r=b[1];
        //     int val=b[2];
        //     for(int i=l;i<=r;i++){
        //         res[i-1]+=val;
        //     }
        // }
        // return res; 
    }
};