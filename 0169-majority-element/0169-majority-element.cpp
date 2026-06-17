class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        for(auto const& [k,v]: mp){
            if(v>n/2){
                return k;
            }
        }return -1;
        /**
        another approach 
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return nums[n/2];
        **/
    }
};