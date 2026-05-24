class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s1;
        unordered_map<char,int> s2;
        if (t.size() != s.size()){
            return false;
        }
        for (int i= 0; i < t.size(); i++){
            if (!s1.contains(s[i])){
                s1.insert({s[i], 1});
                cout << s1[s[i]];
            }
            else
            {
                s1[s[i]]++;
            }
            if (!s2.contains(t[i])){
                s2.insert({t[i], 1});
            }
            else
            {
                s2[t[i]]++;
            }
            cout << s1[i] << "\n" << s2[i] << "\n";
        }
        return s1 == s2;
    }
};
