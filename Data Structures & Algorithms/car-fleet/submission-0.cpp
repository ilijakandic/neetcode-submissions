class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> auta;
        for (int i = 0; i < position.size(); i++)
            auta.push_back({position[i], speed[i]});

        sort(auta.rbegin(), auta.rend());   // opadajuće po poziciji

        stack<double> st;
        for (auto& [p, s] : auta) {
            double t = (double)(target - p) / s;
            if (st.empty() || t > st.top())
                st.push(t);
        }
        return st.size();
    }
};