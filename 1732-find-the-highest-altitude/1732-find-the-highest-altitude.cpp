class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int currsum=0;
        int maxi=0;
        for(int i=0;i<gain.size();i++){
           // gain[0]=0;
           currsum += gain[i];
           maxi = max(currsum, maxi); 
        }
        return maxi;
    }
};