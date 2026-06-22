class Solution {
  public:
    vector<int> preGreaterEle(vector<int>& arr) {
        // code here
        stack<int>st;
        int n=arr.size();
        vector<int>ans(n,-1);
        //traverse ulta 
        for(int i=0;i<n;i++){
            
            //chote uda do
            while(!st.empty() and st.top() <= arr[i]){
                st.pop();
            }
            //stack !empty -> top=>ans
            if(!st.empty()){
                ans[i]=st.top();
            }
            st.push(arr[i]);
            
        }
        return ans;
    }
        
    //     int n=arr.size();
    //     vector<int>ans(n,-1);
    //     for(int i=0;i<arr.size();i++){
    //         for(int j=i+1;j<arr.size();j++){
                
    //             if(arr[i]<arr[j]){
    //               ans[i]=arr[j];
    //               break;
    //             } o(n2)
    //         }
    //     }return ans;
        
    // }
};