class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        
        float slope;
        if(c[0][0]==c[1][0])
            slope=INT_MAX;
        else
            slope=(float)(c[0][1]-c[1][1])/(c[0][0]-c[1][0]);
        for(int i=1;i<c.size();i++)
        {
            if(slope==INT_MAX)
            {
                if(c[i][0]!=c[i-1][0])
                    return false;
            }
            else{
            float f=(float)(c[i][1]-c[i-1][1])/(c[i][0]-c[i-1][0]);
            if(f!=slope)
                return false;
            }
        }
        return true;
    }
};
