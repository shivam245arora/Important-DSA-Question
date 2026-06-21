class Solution {
public:
    void helper(vector<char>&s,int l,int r){
        if(l>=r){
            return;
        }
        swap(s[l],s[r]);
        helper(s,++l,--r);
    }
    // void reverseString(vector<char>& s) {
    //     int low=0;
    //     int high=s.size()-1;

    //     while(low<high){
    //         swap(s[low],s[high]);
    //         low++;
    //         high--;
    //     }
    void reverseString(vector<char>& s) {
        helper(s,0,s.size()-1);
    }
};