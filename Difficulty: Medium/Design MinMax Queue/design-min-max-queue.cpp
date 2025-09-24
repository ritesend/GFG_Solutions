class SpecialQueue {

  public:
    queue<int>q;
    priority_queue<int>q1;
    priority_queue<int,vector<int>, greater<int>>q2;
    unordered_map<int,int>mp;
    void enqueue(int x) {
        // Insert element into the queue
        q.push(x);
        mp[x]++;
    }

    void dequeue() {
        // Remove element from the queue
        int val=q.front();
        q.pop();
        mp[val]--;
        if(mp[val] < 1){
            mp.erase(val);
        }
    }

    int getFront() {
        // Get front element
        return q.front();
    }

    int getMin() {
        // Get minimum element
        
        int mini=INT_MAX;
        
        for(auto x:mp){
            mini=min(mini,x.first);
        }
        return mini;
    }

    int getMax() {
        // Get maximum elemen
        int maxi=INT_MIN;
        for(auto x:mp){
            maxi=max(maxi,x.first);
            //cout<<x.first<<" "<<x.second<<endl;
        }
        return maxi;
    }
};