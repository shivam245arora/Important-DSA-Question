class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int x: nums){
            mp[x]++; 
        }
       priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        for(auto&[e,c]: mp){
            pq.push({c,e});
            if(pq.size()>k) pq.pop();
        }
        vector<int> ans;
        while(!pq.empty()){
            auto [c,e]=pq.top();
            pq.pop();
            ans.push_back(e);
        }
        return ans;


    }
};