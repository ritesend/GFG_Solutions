//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findMin(vector<int>& arr) {
        // complete the function here
        int n=arr.size();
        int low=0;
        int high=n-1;
        
        int ans=INT_MAX;
        while(low <= high){
            int mid=(low+high)/2;
            ans=min(ans,arr[mid]);
            
            if(arr[low] <= arr[mid]){
                ans=min(ans,arr[low]);
                low=mid+1;
            }else{
                ans=min(ans,arr[mid+1]);
                high=mid-1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    Solution ob;
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        cout << ob.findMin(nums) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends