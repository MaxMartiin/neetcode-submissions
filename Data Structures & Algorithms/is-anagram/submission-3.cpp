class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s_map;
        unordered_map<char, int> t_map;
    // check if they are the same size
    if (s.size() != t.size()){
        return false;
    }
     for (int i = 0; i < s.size(); i++){
        s_map[s[i]]++;
        t_map[t[i]]++;
     }
     for (int i = 0; i< s.size(); i++){
        if (s_map[s[i]] != t_map[s[i]]){
            return false;
        }
     }
     return true;
    }
};
