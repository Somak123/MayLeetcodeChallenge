class Solution {
public:
    float dist(int a,int b)
    {
        return (float)sqrt(pow(a,2)+pow(b,2));
    }
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        
        if(K>=points.size())
            return points;
        vector<pair<float,pair<int,int>>>v;
        for(int i=0;i<points.size();i++)
        {
            float d=dist(points[i][0],points[i][1]);
            cout<<d<<endl;
            v.push_back(make_pair(d,make_pair(points[i][0],points[i][1])));
        }
        sort(v.begin(),v.end());
        vector<vector<int>>res;
        for(int j=0;K--;j++)
        {
            pair<int,pair<int,int>>t=v[j];
            res.push_back({t.second.first,t.second.second});
        }
        return res;
    }
};
