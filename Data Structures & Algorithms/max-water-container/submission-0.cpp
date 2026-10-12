class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size() - 1;
        int naj = 0;
        while (l < r) {
            int voda = (r - l) * min(heights[l], heights[r]);
            naj = max(naj, voda);
            if (heights[l] < heights[r]) l++;
            else r--;
        }
        return naj;
    }
};
