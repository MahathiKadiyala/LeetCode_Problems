class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
    int i=0;
    for (int j=1;j<nums.size();j++) {
        if (nums[j]!=nums[i]) {
            i++;
            nums[i]=nums[j]; 
        }
    }
    return i+1; 
    //  if(nums.size()==0)
    //  return 0;
    //  int index=1;
    //  for(int i=1;i<nums.size();i++)
    //  {
    //    if(nums[i]!=nums[i-1]){
    //     nums[index]=nums[i];
    //     index++;
    //    }
    //  }
    //  return index;
    }
};