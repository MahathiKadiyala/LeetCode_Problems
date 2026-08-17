class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int s=0;
        int maxi=0;
        for(int i=0;i<gain.size();i++){
             s+=gain[i];
             maxi=max(maxi,s);
        }
        return maxi;
    }
};

//     vector<int>altitude;
    //     int start=0;
    //     altitude.push_back(start);
    //     for(int i=0;i<gain.size();i++){
    //         int m=start+gain[i];
    //        altitude.push_back(m);
    //        start=m;
    //     }
    //    int max=*max_element(altitude.begin(),altitude.end());
    //    return max;