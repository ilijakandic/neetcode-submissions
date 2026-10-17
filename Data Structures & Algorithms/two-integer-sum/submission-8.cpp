class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mapa;
        mapa.reserve(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            int rez = target - nums[i];
            auto it = mapa.find(rez);
            if (it != mapa.end()) return {it->second, i};
            mapa[nums[i]] = i;
        }
        return {};
    }
};