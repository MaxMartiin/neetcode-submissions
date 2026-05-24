class Solution {
public:
    bool isValid(string s) {
        stack<char> Chars;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '(' || s[i] == '{' || s[i] == '['){
                Chars.push(s[i]);
            }
            if (Chars.empty()){
                return false;
            }
            if (s[i] == ')'){
                if (Chars.top() != '('){
                    return false;
                }
            Chars.pop();
            }
            if (s[i] == '}'){
                if (Chars.top() != '{'){
                    return false;
                }
            Chars.pop();
            }
            if (s[i] == ']'){
                if (Chars.top() != '['){
                    return false;
                }
            Chars.pop();
            } 
        }
        if (Chars.empty()){
            return true;
        }
        while (!Chars.empty()){
            Chars.pop();
        }
    return false;
    }
};
