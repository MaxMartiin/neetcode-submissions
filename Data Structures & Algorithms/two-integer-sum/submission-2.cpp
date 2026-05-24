class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> index;
        for (int i = 0; i < nums.size(); i++){
            // key is the value at nums[i], value is the index
            index[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++){
            int dest = target - nums[i];
            if (index.count(dest) && index[dest] != i){
                return {i, index[dest]};
            }
        }
        return {};
    }
};
