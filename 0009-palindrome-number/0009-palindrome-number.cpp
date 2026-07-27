class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0 || (x%10 == 0 && x!=0)) return false;
        long long rev = 0;
        while (x>rev) {
            rev = (rev*10) + (x%10);
            x/=10;
        }
        return (rev == x || x == rev/10);
    }
};

// The code will run till this conditon is true: (x > reverse)

// When the number of digits in x is even, x = 1221, we'll reverse half of its digits from the end, so now:
// x = 12, and the reverse = 12, so we return true.
// But what if number of digits in x is odd? if x = 12321, after all the operations:
// x = 12, reverse = 123; now what? are we going to return a palindrome as false? we're not. We will handle that when we return the answer, we will return the value of (x == rev /10).
// In this example, x = 12 = (rev / 10 = 123 / 10) = 12; basically 12 = 12; thus it will return true.
// I hope that before reading the approach, you're very clear with the idea that we're gonna work on.

// Approach
// The first if condition handles edge cases, we'll return false if:
// the integer x is negative; x < 0.
// or if the last digit of x is 0 and x is not equal to 0. For instance, x = 120, then after reversing, it would result in 21; 120 != 21.
// Initialize the variable rev to 0 which will be used for storing x after reversing its digits.
// Now, in order to reverse the half of the digits of x from end and store them in rev, we will use a while-loop: while (x > rev).
// Cool note: In case of odd digits in x, rev will have 1 more digit than x. This thing is very important to note, which is why i repeated it.

// OK. Now for the cool part, we add digits to rev. For this, we first multiply rev by 10, then add the remainder of x when divided by 10 (x % 10) in it.
// You can look at the example below for better understanding, or if you've already got this, just skip this part.
// Let x = 1221, rev = 0;

// rev * 10 = 0 * 10 = 0.
// Now add x % 10 = 1221 % 10 = 1 in rev; rev = 0 + 1 = 1. (Some other parts of the code will be executed after this, you can read those below)
// Now, x = 122, rev = 1; rev * 10 = 1 * 10.
// Add x % 10 = 122 % 10 = 2; rev = 10 + 2 = 12
// rev == x; 12 == 12; so we return true.
// Divide x by 10, to avoid iterating over the same digit again.
// Finally, outside the while-loop, return (rev == x || x == rev/10). I have explained the reasons behind these earlier and they check for even and odd number of digits respectively.
// Complexity
// Time complexity:
// O(n)
// Just one while-loop.

// Space complexity:
// O(n)
// Only a few variables, constant space overall.