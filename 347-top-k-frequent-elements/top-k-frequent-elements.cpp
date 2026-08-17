class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>m;
        for (int num : nums) {
            m[num]++;
        }
       vector<pair<int,int>> arr;
        for (auto& it : m) {
            arr.push_back({it.second, it.first}); 
        }

        sort(arr.begin(), arr.end(), greater<>());

        vector<int> res;
        for (int i = 0; i < k; i++) {
            res.push_back(arr[i].second);
        }
        return res;
    }
};