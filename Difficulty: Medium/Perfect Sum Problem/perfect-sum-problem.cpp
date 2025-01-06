//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int mod=1e9+7;
    int countSubset(vector<int>& arr, int n,int target,vector<vector<int>>& dp){
        if(dp[n][target]!=-1){
            return dp[n][target];
        }
        if(n==0 && target>0)return 0;
        else if(n==1){
            if(target==0){
                if(arr[0]==0){
                    return 2;
                }
                else{
                    return 1;
                }
            }
            else{
                if(arr[0]==target){
                    return 1;
                }
                else{
                    return 0;
                }
            }
        }
        else if(n==0 && target==0) return 1;
        int ans=countSubset(arr,n-1,target,dp)%mod;
        if(arr[n-1]<=target){
            ans+=countSubset(arr,n-1,target-arr[n-1],dp)%mod;
            ans%mod;
        }
        return dp[n][target]=ans;
    }
    int perfectSum(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        
        return countSubset(arr,n,target,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int target;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> target;
        cin.ignore(); // Ignore newline character after target input

        Solution solution;
        cout << solution.perfectSum(arr, target);
        cout << "\n~\n";
    }

    return 0;
}

// } Driver Code Ends