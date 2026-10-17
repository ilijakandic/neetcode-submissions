class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> mapa;
        int i = 0;
        for(int a : nums){
            int rez = target - nums[i];
            auto index = mapa.find(rez);
            if(index!=mapa.end()) return {index->second,i};
            mapa.insert({nums[i], i});

            i++;
        }
        return {};
    }
};
