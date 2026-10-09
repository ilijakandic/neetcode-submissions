class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int najduzi = 0;

        for (int x : s) {
            if (s.count(x - 1)) continue;   

            int duzina = 1;
            int broj = x+1;
            while(s.count(broj)){
                duzina++;
                broj++;
            }

            najduzi = max(najduzi, duzina);
        }
        return najduzi;
    }
};
