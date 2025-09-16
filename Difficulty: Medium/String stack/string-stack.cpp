class Solution {
  public:
    bool stringStack(string &pat, string &tar) {
        // code here
        
        int i = pat.size()-1;
        int j = tar.size()-1;
        int cnt =0;  
        while(i>=0){
            if(pat[i] == tar[j]){
                if(cnt%2){
                    cnt++;
                }
                else{
                    cnt =0;
                    j--;
                }
            }
            else{
                cnt++;
            }
            i--;
            if(j <0){
                return true;
            }
        }
        return false;
    }
};