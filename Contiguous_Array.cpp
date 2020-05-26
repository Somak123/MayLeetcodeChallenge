class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        int ans=0;
        unordered_map<int,int>m;
        
        int s=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                s--;
            else
                s++;
            if(s==0)
                ans=max(ans,i+1);
            else
            {
                auto it=m.find(s);
                if(it!=m.end())
                    ans=max(ans,i-it->second);
                else
                    m[s]=i;
            }
        }
        return ans;
        
        
    }
};



