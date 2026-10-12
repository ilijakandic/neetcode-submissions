class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> prozor;
        int l = 0, naj = 0;

        for (int r = 0; r < s.length(); r++) {
            while(prozor.count(s[r])!=0){
                prozor.erase(s[l]);
                l++;
            }
            naj = max(naj,r-l+1);
            prozor.insert(s[r]);
            
        }
        return naj;
    }
};
