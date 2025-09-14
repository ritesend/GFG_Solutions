class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) {
        //  code here
        int n=gas.size();
        int totalGas=0;
        int totalCost=0;
        int currentTank=0;
        int start=0;
        
        for(int i=0;i<gas.size();i++){
            totalGas+=gas[i];
            totalCost+=cost[i];
            
            currentTank+=gas[i]-cost[i];
            
            if(currentTank<0){
                start=i+1;
                currentTank=0;
            }
        }
        
        if(totalGas<totalCost){
            return -1;
        }else{
            if(start==n){
                return 0;
            }
            return start;
        }
    }
};