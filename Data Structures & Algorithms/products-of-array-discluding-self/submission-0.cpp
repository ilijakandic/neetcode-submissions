class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> rez(nums.size(),0);
        int prod = 1;
        vector<int> pred(nums.size());
        for(int i = 0; i < nums.size();i++){
            pred[i] = prod;
            prod *= nums[i];
        }
        vector<int> suff (nums.size());
        prod = 1;
        for(int i = nums.size()-1; i >= 0;i--){
            suff[i] = prod;
            prod *= nums[i];
        }
        for(int i = 0; i < nums.size();i++){
            rez[i] = suff[i] * pred[i];
        }
        return rez;

    }
};
