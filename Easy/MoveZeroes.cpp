/* Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements. */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       // int j =0;
        int len = nums.size();
 	int cur =0, last =0;
        while(cur<len)
        {
            if(nums[cur]!=0)
            {
                swap(nums[last], nums[cur]);
                last++;
            }
            cur++;
        }
    }
};
