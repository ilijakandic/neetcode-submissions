class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> cnt(26, 0);
        int l = 0, naj = 0;

        for (int r = 0; r < s.length(); r++) {
            cnt[s[r] - 'A']++;                          // korak 1

            int maxf = *max_element(cnt.begin(), cnt.end());
            while ((r - l + 1) - maxf > k) {            // korak 2
                cnt[s[l] - 'A']--;
                l++;
                maxf = *max_element(cnt.begin(), cnt.end());
            }

            naj = max(naj, r - l + 1);                  // korak 3
        }
        return naj;
    }
};