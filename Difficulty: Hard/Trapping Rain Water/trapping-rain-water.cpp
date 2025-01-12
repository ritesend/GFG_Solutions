//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int>leftMax(n);
        vector<int>rightMax(n);
        if(n==0) return 0;
        
        leftMax[0]=arr[0];
        for(int i=1;i<n;i++){
            leftMax[i]=max(arr[i],leftMax[i-1]);
        }
        
        rightMax[n - 1] = arr[n - 1];
        for (int i=n-2;i>=0;i--) {
            rightMax[i] = max(arr[i],rightMax[i + 1]);
        }
        
        int waterTrapped=0;
        
        for(int i=0;i<n;i++){
            waterTrapped+=(min(leftMax[i],rightMax[i])-arr[i]);
        }
        return waterTrapped;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.maxWater(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends