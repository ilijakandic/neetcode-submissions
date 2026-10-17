class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int nums_size = nums.size();        
        int idxptr_1 = 0;
        int idxptr_2 =0;

        std::vector<int> ret_vec = {idxptr_1, idxptr_2};

        for(int i=0; i < nums_size; i++){
            idxptr_1 = nums[i];
            for(int j = i+1; j < nums_size; j++){
                idxptr_2 = nums[j];

                if(idxptr_1 + idxptr_2 == target){
                    ret_vec = {i, j};
                    return ret_vec;
                }
            }
        }
        
    }
};
