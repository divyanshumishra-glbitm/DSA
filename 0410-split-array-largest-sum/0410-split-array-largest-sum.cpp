class Solution {
  public:
    bool possible(vector<int> &nums, int k, long long l){
        int n = nums.size();
        int allocatedstu = 1;
        long long pages = 0;

        for(int i = 0; i < n; i++){
            if(nums[i] > l) return false;

            if(pages + nums[i] > l){
                allocatedstu++;
                pages = nums[i];
            }
            else{
                pages += nums[i];
            }
        }

        if(allocatedstu > k) return false;

        return true;
    }

    int splitArray(vector<int> &nums, int k) {
        int n = nums.size();

        if(k > n) return -1;

        int minIndex = min_element(nums.begin(), nums.end()) - nums.begin(); 
        long long start = nums[minIndex]; 

        long long end = accumulate(nums.begin(), nums.end(), 0LL);

        long long mid;
        long long ans = -1;

        while(start <= end){
            mid = start + (end - start) / 2;

            if(possible(nums, k, mid) == true){
                ans = mid;
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }

        return (int)ans;
    }
};