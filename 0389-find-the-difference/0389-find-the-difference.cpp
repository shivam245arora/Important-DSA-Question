class Solution {
public:
    char findTheDifference(string s, string t) {
        int Ssum=0;
        for(int i=0;i<s.length();i++){
            Ssum+=s[i];
        }
         int tsum=0;
        for(int i=0;i<t.length();i++){
             tsum+=t[i];
        }
        return (char)(tsum-Ssum);
    }
};