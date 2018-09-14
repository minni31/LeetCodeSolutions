/* Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array. */

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n*(n+1)/2;
        int sumFound = 0;
        for(auto a: nums)
            sumFound += a;
            
        return (sum-sumFound);
    }
};
