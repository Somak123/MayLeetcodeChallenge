class Solution {
public:
    string removeKdigits(string num, int k) {
        
        if(num.length()==k)
            return "0";
        stack<char>s;
        for(int i=0;i<num.length();i++)
        {
            while(!s.empty() and s.top()>num[i] and k>0)
            {
                s.pop();
                k--;
            }
            s.push(num[i]);
        }
        string ans;
        while(k>0)
        {
            s.pop();
            k--;
        }
        while(!s.empty())
        {
            ans+=s.top();
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        int i=0;
        while(i<ans.length() and ans[i]=='0')
            i++;
        ans=ans.substr(i,ans.length());
        if(ans.empty())
            return "0";
        return ans;
        
    }
};
