class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ansXor = n;
        for(int i=0; i<n; i++){
            ansXor ^= i;
            ansXor ^= nums[i];
        }
        return ansXor;
    }
};