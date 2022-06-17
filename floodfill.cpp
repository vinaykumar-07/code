class Solution
{
public:
    void floodfill(vector<vector<int>> &image, int sr, int sc, int color, int oldcolor)
    {
        // base condition
        if (sr < 0 || sc < 0 || sr == image.size() || sc == image[0].size() || image[sr][sc] != oldcolor)
            return;

        image[sr][sc] = color;
        // performing rest of the operations
        floodfill(image, sr + 1, sc, color, oldcolor);
        floodfill(image, sr - 1, sc, color, oldcolor);
        floodfill(image, sr, sc + 1, color, oldcolor);
        floodfill(image, sr, sc - 1, color, oldcolor);
    }
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        int oldcolor = image[sr][sc];
        // so that is may not get into infinte loop
        if (oldcolor == color)
            return image;
        floodfill(image, sr, sc, color, oldcolor);
        return image;
    }
};