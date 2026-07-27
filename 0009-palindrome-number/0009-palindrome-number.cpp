class Solution {
public:
    bool isPalindrome(int x) {
        unsigned int rev = 0;
        int c = x;

        while (c > 0) {
            rev = rev * 10 + c % 10;
            c /= 10;
        }

        return rev == x ? true : false;
    }
};