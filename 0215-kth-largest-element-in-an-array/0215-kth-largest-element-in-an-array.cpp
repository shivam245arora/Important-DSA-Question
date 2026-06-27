class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // priority_queue<int> pq;
        // for (int i = 0; i < nums.size(); i++) {
        //     pq.push(nums[i]);
        // }
        // for(int j=0;j<k-1;j++) {
        //     pq.pop();   
        // }
        // return pq.top();

         priority_queue<int,vector<int>,greater<int>> pq;
        for (int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
        if(pq.size()>k) pq.pop();
        }
        return pq.top();
    }
};