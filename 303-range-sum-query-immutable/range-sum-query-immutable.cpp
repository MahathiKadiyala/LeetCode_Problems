class NumArray {
public:
vector<int>p;
    NumArray(vector<int>& nums) {
        p.resize(nums.size());
        partial_sum(nums.begin(),nums.end(),p.begin());
    }
    int sumRange(int left, int right) {
        if(left==0) return p[right];
        else return p[right]-p[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */