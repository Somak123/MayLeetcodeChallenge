class Solution {
public:
    int findComplement(int num) {
        
        unsigned mask=compl 0;
        while(mask bitand num)
            mask<<=1;
        return compl mask xor num;
    }
};
