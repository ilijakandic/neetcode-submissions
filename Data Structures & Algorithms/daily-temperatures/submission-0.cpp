class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> st;
        vector<int> rez(temperatures.size(), 0);

        for (int i = 0; i < temperatures.size(); i++) {
            while (!st.empty() && st.top().first < temperatures[i]) {
                int index = st.top().second;
                st.pop();
                rez[index] = i - index;
            }
            st.push({temperatures[i], i});
        }
        return rez;
    }
};