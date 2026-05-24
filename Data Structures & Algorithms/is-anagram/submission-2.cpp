class Solution {
public:
    unordered_map <char, int> s1;
    unordered_map <char, int> s2;
    bool isAnagram(string s, string t) {
        //insert first string into a hashmap
        for (auto i : s){
            if (s1[i] > 0){
            // if we have alr seen then inc the value and continue
                s1[i]++;
                continue;
            }
            s1.insert({i, 0});
            s1[i]++;
        }
        //same with second
        for (auto i : t){
            if (s2[i] > 0){
            // if we have alr seen then inc the value and continue
                s2[i]++;
                continue;
            }
            s2.insert({i, 0});
            s2[i]++;
        }
        // run through the first case and 
        // check if they have the same values for each char
        for (auto &i : s){
            if (s1[i] == s2[i]){
                continue; 
            }
            return false;
        }
        for (auto &i : t){
            if (s1[i] == s2[i]){
                continue; 
            }
            return false;
        }
        return true;
    }
};
