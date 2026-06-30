class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        int temp = x;
        
        while(temp != 0){
            int extra = temp % 10;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && extra > 7)) return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && extra < -8)) return 0;
            rev = (rev * 10) + extra;
            temp/=10;
        }
        return rev;
    }
};
