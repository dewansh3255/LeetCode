class Solution {
public:
    static bool compare(vector<int> &a, vector<int> &b)
        return a[1]<b[1];
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), compare);
        int count = 1;
        int x = points[0][1];
        for(int i=1; i<points.size(); i++)
        {
            if(points[i][0]<=x) continue;
            count++;
            x = points[i][1];
        }
        return count;
    }
};
