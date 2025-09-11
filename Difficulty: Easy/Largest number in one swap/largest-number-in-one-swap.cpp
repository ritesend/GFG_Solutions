class Solution {
  public:
    string largestSwap(string &s) {
        // code here
        for(int i=0;i<s.length();i++){
            int biggerIdx=-1;
            for(int j=i+1;j<s.length();j++){
                if(s[i]<s[j]){
                    if(biggerIdx==-1 || s[biggerIdx]<=s[j]){
                        biggerIdx=j;
                    }
                }
            }
            
            if(biggerIdx!=-1){
                swap(s[i],s[biggerIdx]);
                return s;
            }
            
        }
        return s;
    }
};