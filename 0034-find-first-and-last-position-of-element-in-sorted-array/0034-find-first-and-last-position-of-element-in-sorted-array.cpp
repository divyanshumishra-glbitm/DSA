class Solution {
public:

    int firstO(vector<int>& nums, int target) {
        int l = nums.size();
        int first = -1;
        int start = 0;
        int end = l - 1;
        int mid;

        while (start <= end) {
            mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                first = mid;
                end = mid - 1;
            }
            else if (nums[mid] > target) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        return first;
    }

    int first1(vector<int>& nums, int target) {
        int l = nums.size();
        int last = -1;
        int start = 0;
        int end = l - 1;
        int mid;

        while (start <= end) {
            mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                last = mid;
                start = mid + 1;
            }
            else if (nums[mid] > target) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        return last;
    }

    vector<int> searchRange(vector<int>& nums, int target) {

        int x = firstO(nums, target);

        if (x == -1)
            return {-1, -1};

        int y = first1(nums, target);

        return {x, y};
    }
};