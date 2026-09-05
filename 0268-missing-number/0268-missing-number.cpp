class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans;
        int totalSum = (n*(n+1))/2;
        int calcSum = 0;
        for(int i=0; i<n; i++){
            calcSum += nums[i];
        }
        ans = totalSum-calcSum;
        return ans;
    }
};