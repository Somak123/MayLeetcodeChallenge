class Solution {
public:
    int numJewelsInStones(string J, string S) {
        
        unordered_set<char>m;
        for(auto j:J)
            m.insert(j);
        
        int c=0;
        for(auto j:S)
            if(m.find(j)!=m.end())
                c++;
        return c;
    }
};
