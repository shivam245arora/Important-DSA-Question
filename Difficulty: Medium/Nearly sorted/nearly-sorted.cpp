class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        // code here
        priority_queue<int,vector<int>,greater<int>> pq;
        
        int idx=0;
        for(int x:arr){
            pq.push(x);
            if(pq.size()== k+1){
                arr[idx]=pq.top();
                pq.pop();
                idx++;
            }
        }
        while(!pq.empty()){
            arr[idx] = pq.top();
            pq.pop();
            idx++;
        }
    }
};