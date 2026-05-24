class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, bool> found;
        for(int i = 0; i < nums.size(); i++){
            int j = nums[i];
            cout << j;
            if (found[j] == true){
                return true;
            }
            found[j] = true;
        }
        return false;
    }
};
