class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int mid;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) return mid;

            if (nums[low] <= nums[mid]) {          // leva polovina sortirana
                if (target >= nums[low] && target < nums[mid])
                    high = mid - 1;                // meta je u levoj
                else
                    low = mid + 1;
            } else {                               // desna polovina sortirana
                if (target > nums[mid] && target <= nums[high])
                    low = mid + 1;                 // meta je u desnoj
                else
                    high = mid - 1;
            }
        }
        return -1;
    }
};
