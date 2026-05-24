class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> hash;
    
        for(auto &i : nums){
            // if i find the value in the hash map
            // and it is set to true return true
            if (hash[i] > 0){
                return true;
            }
            //else insert the value
            hash.insert({i, 0});
            hash[i]++;

            //cout << i;
        }
        // if no double is found then we return false
        return false;
    }
};
