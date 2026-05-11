class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        
        int max1=INT_MIN;
        int max2=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max1){
                max1=arr[i];
            }
        }
        for(int i=0;i<arr.size();i++){
             if(arr[i]!=max1){
            max2=max(max2,arr[i]);
        } 
       
    }
         return (max2==INT_MIN)?-1:max2;
    }
};