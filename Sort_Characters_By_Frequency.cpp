class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char,int>m;
        int i;
        for(i=0;i<s.length();i++)
            m[s[i]]++;
        priority_queue<pair<int,char>>p;
        for(auto j:m)
        {
            p.push(make_pair(j.second,j.first));
        }
        s="";
        while(!p.empty())
        {
            int c=p.top().first;
            while(c--)
            {
                s+=p.top().second;
            }
            p.pop();
            
        }
        return s;
    }
};
