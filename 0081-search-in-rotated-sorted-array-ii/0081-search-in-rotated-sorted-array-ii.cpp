class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int l = nums.size();
        int start = 0;
        int mid;
        int end = l - 1;

        while (start <= end) {
            
            mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                return true;
            }
            //just add codition for first last and mid hould hot equal tio each other

            if(nums[start]==nums[mid]&&nums[mid]==nums[end]){
                start++;
                end--;
                continue;
            }

            // Left half is sorted
            if (nums[start] <= nums[mid]) {

                if (nums[start] <= target && target < nums[mid]) {
                    end = mid - 1;
                }
                else {
                    start = mid + 1;
                }
            }

            // Right half is sorted
            else {

                if (nums[mid] < target && target <= nums[end]) {
                    start = mid + 1;
                }
                else {
                    end = mid - 1;
                }
            }
        }

     return false;
    
    }
};