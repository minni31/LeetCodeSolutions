/* Given two arrays, write a function to compute their intersection. */

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
	unordered_map<int, int> count;
        int size1 = nums1.size();
        int size2 = nums2.size();
        vector<int> res;
        if(size1==0  || size2 ==0)
            return res;
        for(int i=0; i<size1; i++)
            count[nums1[i]]++;
        for(int i=0; i<size2; i++)
        {
            if(count.find(nums2[i])!=count.end() && count[nums2[i]]>0)
            {
                res.push_back(nums2[i]);
                count[nums2[i]]--;
            }      
        }
        return res;
    }
};
