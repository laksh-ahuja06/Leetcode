class Solution {
public:

    int gcd (int a, int b) {
        if (a == 0) return b;
        return gcd (b%a, a);
    }

    long long maxPairStrength(vector<int>& nums) {
        long long max = INT_MIN;
        for (int i = 0; i < nums.size ()-1; i++) {
            for (int j = i+1; j < nums.size(); j++) {
            long long choosing = (1LL * nums[i] * nums[j]) / pow(gcd (nums[i], nums[j]), 2);
            if (choosing > max) max = choosing;
            }
        }
        return max;
    }   
};