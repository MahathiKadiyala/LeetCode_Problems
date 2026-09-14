class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
         stack<int> st;
        unordered_map<int, int> mp;
        for (int i = nums2.size() - 1; i >= 0; i--) {       
            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }
            if (st.empty()) {
                mp[nums2[i]] = -1;
            }
            else {
                mp[nums2[i]] = st.top();
            }
            st.push(nums2[i]);
        }
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++) {
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
        // vector<int>result;
        // for(int i=0;i<nums1.size();i++){
        //     int res=-1;
        //     for(int j=0;j<nums2.size();j++)
        //     {
        //        if(nums1[i]==nums2[j])
        //        {
        //           for(int k=j+1;k<nums2.size();k++){
        //               if(nums2[k]>nums1[i]){
        //               res=nums2[k];
        //               break;
        //               }
        //           }
        //         break;
        //        }
        //     }
        //     result.push_back(res);
        //     }
        // return result;
    }
};