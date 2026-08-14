class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int cnt=0;
        int l=0;
        int s=0;
        for(int r=0;r<arr.size();r++){
            s+=arr[r];
            if(r-l+1==k){
                int avg=s/k;
                if(avg>=threshold) cnt++;
                s-=arr[l];
                l++;
            }
        }
        return cnt;
    }
};