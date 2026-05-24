class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, bool> found;
        for(int i = 0; i < nums.size(); i++){
            if (found[nums[i]] == true){
                return true;
            }
            found[nums[i]] = true;
        }
        return false;
    }
};
