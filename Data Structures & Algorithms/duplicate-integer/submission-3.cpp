class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int i =0;
        for(int a: nums){
            int y = 0;
            for (int x : nums){
                if(y!=i && x==a){
                    return true;
                }
                y++;
            }
            i++;
        }
        return false;
    }
};