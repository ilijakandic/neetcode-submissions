class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> maxLevo(height.size());
        vector<int> maxDesno(height.size());
        vector<int> voda(height.size());
        int m = 0;
        int n = height.size();
        for (int i = 0; i < n; i++) {
            m = max(m, height[i]);
            maxLevo[i] = m;
        }
        m = 0;
        for (int i = n-1; i >= 0; i--) {
            m = max(m, height[i]);
            maxDesno[i] = m;
        }
        int sum = 0;
        for(int i = 0 ; i < n; i++){
            sum += min(maxDesno[i], maxLevo[i]) - height[i];
        }
        return sum;
    }
};
