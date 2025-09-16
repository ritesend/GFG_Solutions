class Solution {
  public:
    int evaluatePostfix(vector<string>& arr) {
        // code here
        stack<int>st;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]=="*"){
                int temp=st.top();
                st.pop();
                int temp1=st.top();
                st.pop();
                st.push(temp*temp1);
            }
            else if(arr[i]=="/"){
                int temp=st.top();
                st.pop();
                int temp1=st.top();
                st.pop();
                
                st.push(floor(double(temp1)/temp));
            }
            else if(arr[i]=="+"){
                int temp=st.top();
                st.pop();
                int temp1=st.top();
                st.pop();
                st.push(temp+temp1);
            }
            else if(arr[i]=="-"){
                int temp=st.top();
                st.pop();
                int temp1=st.top();
                st.pop();
                
                st.push(temp1-temp);
            }
            else if(arr[i]=="^"){
                int temp=st.top();
                st.pop();
                int temp1=st.top();
                st.pop();
                
                st.push(pow(temp1,temp));
            }
            else{
                st.push(stoi(arr[i]));
            }
        }
        
        return st.top();
    }
};