class Solution {
  public:
    int minParentheses(string& s) {
        // code here
        int cnt1=0;
        int cnt=0;
        
        stack<int>st;
        
        for(int i=0;i<s.length();i++){
            if(!st.empty() && s[i]==')' && st.top()=='('){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        return st.size();
    }
};