class Solution {
public:
    bool isValid(vector<int>& weights, int days,int maxcap){
        int rd=1;
        int cl=0;
        for(int currwt : weights){
            if(cl+currwt<=maxcap){
                cl+=currwt;
            }
            else{
                rd++;
                cl=0;
                cl+=currwt;
            }
            if(rd>days) return false;
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        int ans = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (isValid(weights, days, mid) == true) {
                ans = mid;
                high = mid - 1;

            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
// #include <vector>
// #include <algorithm>

// using namespace std;

// class Solution {
// public:
//     bool isValid(const vector<int>& piles, int mid, int h) {
//         int rh = 0;
//         for (int nob : piles) {
//             // Equivalent to ceil((double)nob / mid)
//             rh += (nob + mid - 1) / mid;
//             if (rh > h) {
//                 return false;
//             }
//         }
//         return true;
//     }

//     int minEatingSpeed(vector<int>& piles, int h) {
//         // Using max_element is cleaner and idiomatic C++
//         int high = *max_element(piles.begin(), piles.end());

//         int l = 1; // FIX: Minimum speed must be 1, not 0
//         int ans = high;

//         while (l <= high) {
//             int mid = l + (high - l) / 2;
//             if (isValid(piles, mid, h)) {
//                 ans = mid;
//                 high = mid - 1; // Try to find a smaller valid speed
//             } else {
//                 l = mid + 1;    // Speed is too slow, increase it
//             }
//         }
//         return ans;
//     }
// };