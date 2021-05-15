#https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int left[n],right[n];
        for(int i=0;i<n;i++){
            left[i]=0;
            right[i]=0;
        }
    
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1)
                count++;
            else
                count=0;
            left[i]=count;
        }
        count=0;
        for(int i=n-1;i>=0;i--){
            if(nums[i]==1)
                count++;
            else
                count=0;
            right[i]=count;
        }
        int max_size=0;
        for(int i=0;i<n-2;i++)
            max_size=max(max_size,left[i]+right[i+2]);
    return max_size;
    }
    
};
