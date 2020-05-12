class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        
        int l=0,r=nums.size()-1,mid;
        while(l<r)
        {
            mid=l+(r-l)/2;
            int temp=mid^1;
            if(nums[mid]==nums[temp])
                l=mid+1;
            else
                r=mid;
        }
        return nums[l];
    }
};
