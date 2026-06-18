class Solution {
public:
    vector<int> twoSum(vector<int>& vec, int target) {
    int low=0;
    int high=vec.size()-1;
    while(low<high){
        int sum=vec[low]+vec[high];
        if(sum>target){
          high--;  
        } 
        else if(sum<target) {
            low++;
        }
        else{ 
        return{low+1,high+1};
        }  
    }
    return {};
    }

};