class Solution {
public:
    bool possible(vector<int>& bloomDay, int m, int k, int day) {
        int bouquets = 0;
        int flowers = 0;

        for (int i = 0; i < bloomDay.size(); i++) {

            if (bloomDay[i] <= day) {
                flowers++;
            } 
            else {
                bouquets += flowers / k;
                flowers = 0;
            }
        }

        bouquets += flowers / k;

        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        int n = bloomDay.size();

        // Not enough flowers
        if ((long long)m * k > n) {
            return -1;
        }

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (possible(bloomDay, m, k, mid)) {
                high = mid - 1; // Try fewer days
            } 
            else {
                low = mid + 1;  // Need more days
            }
        }

        return low;
    }
};