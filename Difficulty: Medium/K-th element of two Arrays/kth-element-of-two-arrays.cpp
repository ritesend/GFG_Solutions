//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        
        int i=0,j=0,count=0,kth=0;
        vector<int>ans;
        
        while(i<a.size() && j<b.size()){
            if(a[i] <= b[j]){
                kth=a[i];
                i++;
            }
            else{
                kth=b[j];
                j++;
            }
            count++;
            if(count==k){
                return kth;
            }
        }
        
        while(i<a.size()){
            kth=a[i];
            i++;
            count++;
            if(count==k){
                return kth;
            }
        }
        
        while(j<b.size()){
            kth=b[j];
            j++;
            count++;
            if(count==k){
                return kth;
            }
        }

    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, m, k;
        cin >> k;
        cin.ignore();
        string input;
        int num;
        vector<int> a, b;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }

        getline(cin, input);
        stringstream s3(input);
        while (s3 >> num) {
            b.push_back(num);
        }

        Solution ob;
        cout << ob.kthElement(a, b, k) << endl << "~\n";
    }
    return 0;
}
// } Driver Code Ends