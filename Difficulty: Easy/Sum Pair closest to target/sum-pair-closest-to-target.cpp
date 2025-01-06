//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        if(arr.size()<2){
            return {};
        }
        int n=arr.size();
        int i=0;
        int j=n-1;
        int closeSum=INT_MAX;
        int diff=INT_MAX;
        pair<int,int>result;
        
        sort(arr.begin(),arr.end());
        
        while(i<j){
            
            int currSum=arr[i]+arr[j];
            
            if(abs(target-currSum) < diff){
                diff=abs(target-currSum);
                //closeSum=currSum;
                result={arr[i],arr[j]};
            }
            
            if(currSum<target){
                i++;
            }
            else if(currSum>target){
                j--;
            }
            else{
                return {arr[i],arr[j]};
            }
            // if(arr[i]+arr[j]==target) return {arr[i],arr[j]};
            // if(arr[i]+arr[j] < target){
            //     mini=min(arr[i]+arr[j],mini);
            //     i++;
            // }
            // else{
            //     mini=min(abs(arr[i]-arr[j]),mini);
            //     j--;
            // }
            
        }
        return {result.first,result.second};
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int target = stoi(ks);
        Solution ob;
        vector<int> ans = ob.sumClosest(arr, target);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto it : ans) {
                cout << it << " ";
            }
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends