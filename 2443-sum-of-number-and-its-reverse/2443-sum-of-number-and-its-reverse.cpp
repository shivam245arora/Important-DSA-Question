class Solution {
public:
   int reverse(int n){
        int rev=0;
        while(n!=0){
            int temp= n%10;
            rev= rev*10+temp;
            n/=10;
            }
            return rev;

     }
    bool sumOfNumberAndReverse(int num) {
        for (int i = 0; i <= num; ++i) {
            if (i + reverse(i) == num) {
                return true;
            }
        }
        return false;
    }
};