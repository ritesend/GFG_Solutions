class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        unordered_map<int,int>mp;
        
        mp[0]=-1;
        
        int prefix=0;
        int ans=0;
        
        for(int i=0;i<arr.size();i++){
            prefix+=arr[i];
            
            if(mp.count(prefix)){
                ans=max(ans,i-mp[prefix]);
            }
            else{
                mp[prefix]=i;
            }
        }
        return ans;
    }
};