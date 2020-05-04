class Solution {
public:
    int findComplement(int num) {
        
        string ans="";
        while(num>0)
        {
            int r=num%2;
            if(r==1)
                ans="0"+ans;
            else
                ans="1"+ans;
            num/=2;
        }
        int ians=0,c=0;
        for(int i=ans.length()-1;i>=0;i--)
        {
            ians+=(ans[i]-'0')*pow(2,c++);
        }
        return ians;
    }
};



//One more solution using bit manipulation :

class Solution {
public:
    int findComplement(int num) {
        
        unsigned mask=compl 0;
        while(mask bitand num)
            mask<<=1;
        return compl mask xor num;
    }
};
