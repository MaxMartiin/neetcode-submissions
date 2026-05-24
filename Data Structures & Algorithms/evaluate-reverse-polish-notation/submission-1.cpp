class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;
        int op1 = 0;
        int op2 = 0;
        for (const string& c : tokens){
            if (c != "+" && c != "-" 
            && c != "*" && c != "/"){
                stack.push(stoi(c));
            }
            else
            {
                op1 = stack.top();
                stack.pop();
                //cout << op1 << "\n";
                op2 = stack.top();
                //cout << op2 << "\n";
                stack.pop();
                if (c == "+"){
                    stack.push(op2 + op1);
                }
                else if (c == "-"){
            
                    stack.push( op2 - op1);
                }
                else if (c == "*"){
                   
                    stack.push(op2 * op1);
                }
                else if (c == "/"){
                    
                    stack.push(op2 / op1);
                }
            }
        }
        return stack.top();
    }
};
