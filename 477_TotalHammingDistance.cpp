#https://leetcode.com/problems/total-hamming-distance/
class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int ans=0;
        int bitcount=0;
        for(int i=0;i<32;i++)
        {
            bitcount=0;
            for(int j=0;j<nums.size();j++)
                bitcount+=(nums[j]>>i)&1;
            ans+=bitcount*(nums.size()-bitcount);
        }
        return ans;
    }
};
