class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> need, window;
        for (char c : t) need[c]++;

        int trebaMi = need.size();
        int imam = 0;
        int l = 0;
        int najDuzina = INT_MAX, najPoc = 0;

        for (int r = 0; r < s.length(); r++) {
            char c = s[r];
            if (need.count(c)) {              // samo slova koja me zanimaju
                window[c]++;
                if (window[c] == need[c]) imam++;
            }

            while (imam == trebaMi) {         // prozor je dobar
                if (r - l + 1 < najDuzina) {  // zapamti ako je najkraći
                    najDuzina = r - l + 1;
                    najPoc = l;
                }

                char izlazi = s[l];           // stiskaj sleva
                if (need.count(izlazi)) {
                    window[izlazi]--;
                    if (window[izlazi] < need[izlazi]) imam--;
                }
                l++;
            }
        }

        return najDuzina == INT_MAX ? "" : s.substr(najPoc, najDuzina);
    }
};