class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_set<int> set1;
       for (int i = 0; i < nums.size(); i++){
        if (!set1.count(nums[i]) == 0){
            return true;
        }
        else
        {
            set1.insert(nums[i]);
        }
       }
       return false;
    }
};