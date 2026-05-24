class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //key will be the value at nums
       unordered_map<int,bool> seen;
       for (int i = 0; i < nums.size(); i++){
            if (seen[nums[i]] == true){
                return true;
            }
        // else we set the value to true
            seen[nums[i]] = true;
       }
       return false;

    }
};
