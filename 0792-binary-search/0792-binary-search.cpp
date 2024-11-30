class Solution {
public:
    int search(vector<int>& nums, int target) {
                int left = 0, right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2; // Avoids overflow
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return -1; // Return -1 if the target is not found
    }
};