class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxiw = 0;
        for (const string& s : sentences) {
            int word = 1;

            for (char ch : s) {
                if (ch == ' ') {
                    word++;
                }
            }
            maxiw = max(maxiw, word);
        }
        return maxiw;
    }
};