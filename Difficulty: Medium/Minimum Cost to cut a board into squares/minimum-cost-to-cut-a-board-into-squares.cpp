class Solution {
  public:
    int minCost(int n, int m, vector<int>& x, vector<int>& y) {
        //  code here
        int totalCost=0;
        
        int vertical=1,horizontal=1;
        
        
        vector<pair<int,char>>v;
        
        for(int i=0;i<x.size();i++){
            v.push_back({x[i],'x'});
        }
        
        for(int i=0;i<y.size();i++){
            v.push_back({y[i],'y'});
        }
        
        
        sort(v.begin(), v.end(), [](auto &a, auto &b){
        return a.first > b.first;
    });
        
        for(int i=0;i<v.size();i++){
            if(v[i].second=='x'){
                totalCost+= v[i].first*horizontal;
                vertical++;
            }
            else{
                totalCost+= v[i].first*vertical;
                horizontal++;
            }
        }
        return totalCost;
        
    }
};
