class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;              // indeksi, visine rastuće
        int naj = 0;
        int n = heights.size();

        for (int i = 0; i <= n; i++) {
            int h = (i == n) ? 0 : heights[i];   // virtuelni stupac visine 0 na kraju

            while (!st.empty() && heights[st.top()] > h) {
                int visina = heights[st.top()];
                st.pop();
                int levo = st.empty() ? -1 : st.top();
                int sirina = i - levo - 1;
                naj = max(naj, visina * sirina);
            }
            st.push(i);
        }
        return naj;
    }
};