//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        unordered_map<int,int>mp;
        int maxi=0;
        int start=0;
        
        for(int end=0;end<s.size();end++){
            if(mp.find(s[end])!=mp.end()){
                start=max(start,mp[s[end]]+1);
            }
            mp[s[end]]=end;
            
            maxi=max(maxi,end-start+1);
        }
        return maxi;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends