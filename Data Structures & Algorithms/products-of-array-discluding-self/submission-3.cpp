class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int prod = 1;
        vector<int> rez(nums.size());


        for (int i = 0; i < nums.size(); i++) {
            rez[i] = prod;
            prod *= nums[i];
        }

        prod = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            rez[i] *= prod;
            prod *= nums[i];
        }

        return rez;

    }
};
