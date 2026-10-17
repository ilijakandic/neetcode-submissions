class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mapa;
        for(auto& x : nums){
            mapa[x]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto& [k,v] : mapa){
            bucket[v].push_back(k);
        }
        vector<int> ret;
        for(int i = nums.size(); i>=1 && ret.size() < k; i--){
            for (int broj : bucket[i]){
                ret.push_back(broj);
                if (ret.size() == k) return ret;
            }
        }
        return ret;

    }
};
