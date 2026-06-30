class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int>mp;
        for(auto s:sentence){
            mp[s]++;
        }
        for(char i='a';i<='z';i++){
            if(mp[i]<1) return false;
        }
        return true;
    }
};