class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int newColor,char c)
    {
        if(sr<0 || sc<0 || sr>=image.size() || sc>=image[sr].size() || image[sr][sc]==newColor || image[sr][sc]!=c)
            return;
        if(image[sr][sc]==c)
        {
            image[sr][sc]=newColor;
            dfs(image,sr+1,sc,newColor,c);
            dfs(image,sr-1,sc,newColor,c);
            dfs(image,sr,sc+1,newColor,c);
            dfs(image,sr,sc-1,newColor,c);
        }
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        char c=image[sr][sc];
        dfs(image,sr,sc,newColor,c);
        return image;
    }
};
