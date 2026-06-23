#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    bool isValid(const vector<int>& piles, int mid, int h) {
        int rh = 0;
        for (int nob : piles) {

            rh += (nob + mid - 1) / mid;
            if (rh > h) {
                return false;
            }
        }
        return true;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int high = *max_element(piles.begin(), piles.end());

        int l = 1;
        int ans = high;

        while (l <= high) {
            int mid = l + (high - l) / 2;
            if (isValid(piles, mid, h)) {
                ans = mid;
                high = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }
};