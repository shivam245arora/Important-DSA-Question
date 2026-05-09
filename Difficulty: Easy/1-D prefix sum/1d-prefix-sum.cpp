class Solution {
  public:
    vector<int> prefSum(vector<int> &arr) {
        int n = arr.size();
        vector<int> res(n);
        
        
        res[0] = arr[0];
        
        
        for (int i = 1; i < n; i++) {
            res[i] = res[i - 1] + arr[i];
        }
        
        return res;
    }
};