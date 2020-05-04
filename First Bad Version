// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int ans=-1,i=1,j=n;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(isBadVersion(mid))
            {
                ans=mid;
                j=mid-1;
            }
            else
                i=mid+1;
        }
        return ans;
    }
};
