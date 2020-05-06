//Moore Voting Algorithm

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int major=nums[0],c=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==major)
                c++;
            else
                c--;
            if(c==0)
            {
                major=nums[i];
                c=1;
            }
        }
        return major;
    }
};
