class Solution {
public:
    bool isHappy(int n) {
        int sum = 0, lastdigit;
        unordered_set<int> st;   //  Added

        while (sum != 1) {
            sum = 0;

            while (n > 0) {
                lastdigit = n % 10;
                sum = sum + lastdigit * lastdigit;
                n = n / 10;
            }

            if (st.count(sum)) {   // Changed
                return false;
            }

            st.insert(sum);        //  Added

            n = sum;
        }

        return true;
    }
};