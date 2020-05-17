class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int>hms(26,0);
        vector<int>hmp(26,0);
        vector<int>ans;
        if(s.length()<p.length()) return ans;
        int st=0,en=p.length();
        for(auto c:p) hmp[c-'a']++;
        
        for(int i=0;i<p.length();i++)
            hms[s[i]-'a']++;
        
        if(hms==hmp)
            ans.push_back(0);
        st++;
        while(en<s.length())
        {
            hms[s[en]-'a']++;
            hms[s[st-1]-'a']--;
            if(hms==hmp)
                ans.push_back(st);
            en++;
            st++;
        }
        return ans;
                        
    }
};
