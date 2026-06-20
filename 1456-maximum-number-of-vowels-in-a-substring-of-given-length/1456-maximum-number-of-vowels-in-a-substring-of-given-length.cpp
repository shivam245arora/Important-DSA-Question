class Solution {
public:
    
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int maxVowels(string s, int k) {
        int l = 0;
        int n = s.length();
        int wincnt = 0;
        int maxcnt = 0;

        for (int r = 0; r < n; r++) {
            
            if (isVowel(s[r])) {
                wincnt++;
            }

            
            if (r - l + 1 > k) {
                if (isVowel(s[l])) {
                    wincnt--;
                }
                l++;
            }

            
            if (r - l + 1 == k) {
                maxcnt = max(maxcnt, wincnt);
            }
        }

        return maxcnt;
    }
};