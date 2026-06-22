class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        stack<int>st;
        int n=arr.size();
        vector<int>ans(n,0);
        //traverse ulta 
        for(int i=n-1;i>=0;i--){
            //chote uda do
            while(!st.empty() and arr[st.top()] <= arr[i]){
                st.pop();
            }
            //stack !empty -> top=>ans
            if(!st.empty()){
                ans[i]=st.top()-i;
            }
            st.push(i);
            
        }
        return ans;
    }
};