class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;   // max-heap, podrazumevani
        vector<int> rez;

        for (int r = 0; r < nums.size(); r++) {
            pq.push({nums[r], r});

            int l = r - k + 1;              // levi kraj prozora

            while (pq.top().second < l)     // vrh je ispao iz prozora
                pq.pop();

            if (r >= k - 1)                 // prozor je pun
                rez.push_back(pq.top().first);
        }
        return rez;
    }
};
