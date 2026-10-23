class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int rez = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            long long sati = 0;
            for (int p : piles)
                sati += (p + mid - 1) / mid;

            if (sati <= h) {
                rez = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return rez;
    }
};