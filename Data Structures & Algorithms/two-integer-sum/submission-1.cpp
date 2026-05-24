class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> indexes;
        for (int i = 0; i < nums.size(); i++){
            // set value = i and key = nums[i]
            indexes[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++){
            int difference = target - nums[i];
            if (indexes.count(difference) && indexes[difference] != i){
                return {i, indexes[difference]};
            }
        }
        return {};
    }
};
