class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        int l=0,r=0;
        int n=arr.size();
        double sum=0;
        double maxi=INT_MIN;
        
        while(r<n){
            sum+=arr[r];
            if(r-l+1>k){
                sum-=arr[l];
                l++;
            }
            if(r-l+1==k){
                maxi=max(maxi,sum/k);
            }
            r++;
        }
        return maxi;
    }

};