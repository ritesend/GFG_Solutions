//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
        int low = 0;
        int high = n-1;
        int mi = 0;
        int ma =0;
        int ans =0;
        while(low<high){
            if(arr[low]<arr[high]){
                if(arr[low]>mi){
                    mi = arr[low];
                }
                else {
                    ans = ans + mi-arr[low];
                }
                low++;
            }
            else {
                if(arr[high]>ma){
                    ma = arr[high];
                }
                else{
                    ans = ans + ma-arr[high];
                }
                high--;
            }
        }
        return ans;
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