class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        vector<int> ans;

        // Count frequency
        for (int x : nums) {
            mp[x]++;
        }

        // Traverse hash map using iterator
        for (auto it = mp.begin(); it != mp.end(); it++) {
            if (it->second > nums.size() / 3) {
                ans.push_back(it->first);
            }
        }

        return ans;
    }
};