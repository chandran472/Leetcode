class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string res;
        for(char ch : s)
        {
            if(ch=='(')
            {
                if(!st.empty())
                {
                    res.push_back(ch);
                }
                st.push(ch);
            }
            else
            {
                st.pop();
                if(!st.empty())
                {
                    res.push_back(ch);
                }
            }
        }
        return res;
    }
};