//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        
        int left=0;
        int right=0;
        int sum=0;
        int n=arr.size();
        
        
        while(right<=n){
            if(sum==target){
                return {left+1,right};
            }
            
            else if(sum<target){
                if(right<n){
                    sum+=arr[right];
                }
                right++;
            }
            else if(sum>target){
                sum-=arr[left];
                left++;
            }
        }
        return {-1};
    }
    
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore();

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends