class Solution {
public:
    vector<int> countBits(int num) {
        
        vector<int>res(num+1);
        res[0]=0;
        int n=1;
        for(int i=1;i<=num;i++)
        {
            if(n*2==i)
                n*=2;
            res[i]=res[i-n]+1;
        }
        
        return res;
    }
};
