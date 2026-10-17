class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> red(9), kol(9), kvad(9);

        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                char ch = board[r][c];
                if (ch == '.') continue;

                int k = (r / 3) * 3 + (c / 3);

                if (red[r].count(ch) || kol[c].count(ch) || kvad[k].count(ch))
                    return false;

                red[r].insert(ch);
                kol[c].insert(ch);
                kvad[k].insert(ch);
            }
        }
        return true;
    }
};