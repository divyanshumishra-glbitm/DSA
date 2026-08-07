class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_set<int> seen;
        int result = 0;

        for (int value : nums) {
            if (seen.count(value))
                result ^= value;
            else
                seen.insert(value);
        }

        return result;
    }
};