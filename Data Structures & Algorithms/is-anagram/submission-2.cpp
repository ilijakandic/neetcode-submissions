class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }
        unordered_map<char,int> mapa;
        for (char c : s) mapa[c]++;
        for(char c : t) mapa[c]--;
        for(auto& [c,d]: mapa) if(d!=0) return false;
        return true;
    }
};
