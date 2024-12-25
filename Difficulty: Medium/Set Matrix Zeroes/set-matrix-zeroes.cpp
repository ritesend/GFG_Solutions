//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void rows(vector<vector<int>> &ans,int row){
        for(int i=0;i<ans[0].size();i++){
            ans[row][i]=0;
        }
    }
    void cols(vector<vector<int>> &ans,int col){
        for(int i=0;i<ans.size();i++){
            ans[i][col]=0;
        }
    }
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        vector<vector<int>>ans=mat;
        
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==0){
                    rows(ans,i);
                    cols(ans,j);
                }
            }
        }
        mat=ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        ob.setMatrixZeroes(arr);
        for (auto x : arr) {
            for (auto y : x)
                cout << y << " ";
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends