class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr) {
        // code here
        int n=arr.size();
        stack<int> st;
        st.push(-1);
        vector<int> ans(n,-1);
        
        for(int i=n-1;i>=0;i--){
            st.push(arr[i]);
        }
        
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<=arr[i]){
                st.pop();
            }
            
            
            if(!st.empty()){
                ans[i]=st.top();
            }
            
            st.push(arr[i]);
        }
        return ans;
    }
};