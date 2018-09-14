/* Given two arrays, write a function to compute their intersection.*/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        map<int, int> mp;
        for(auto i:nums1)
            mp[i] = 1;
        for(auto j:nums2){
            if(mp.find(j) != mp.end() && mp[j] == 1)
            {
                res.push_back(j);
                mp[j]  = 0;
            }
        }
        return res;
        
    }
};
