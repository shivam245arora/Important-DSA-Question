class Solution {
  public:
    int kthSmallest(vector<int> &nums, int k) {
        // code here
        priority_queue<int> pq;
        for (int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
            if (pq.size() > k)
                pq.pop();
        }
        return pq.top();
    }
};