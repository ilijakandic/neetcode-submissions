class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mapa;
        for(const auto& x : strs){
            string key = x;
            sort(key.begin(),key.end());
            mapa[key].push_back(x);

        }
        vector<vector<string> > rez;
        for(auto& [k,v] : mapa){
            rez.push_back(v);
        }
        return rez;
    }
};
