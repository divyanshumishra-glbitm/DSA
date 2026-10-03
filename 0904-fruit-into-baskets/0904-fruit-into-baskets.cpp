class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        int n = fruits.size();

        int l = 0;
        int r = 0;
        int maxi = 0;

        int buck1 = -1;
        int buck2 = -1;

        int last1 = -1;
        int last2 = -1;

        while(r < n) {

            if(buck1 == -1) {
                buck1 = fruits[r];
                last1 = r;
            }
            else if(fruits[r] == buck1) {
                last1 = r;
            }
            else if(buck2 == -1) {
                buck2 = fruits[r];
                last2 = r;
            }
            else if(fruits[r] == buck2) {
                last2 = r;
            }
            else {

                if(last1 < last2) {
                    l = last1 + 1;
                    buck1 = fruits[r];
                    last1 = r;
                }
                else {
                    l = last2 + 1;
                    buck2 = fruits[r];
                    last2 = r;
                }
            }

            int len = r - l + 1;
            maxi = max(maxi, len);

            r++;
        }

        return maxi;
    }
};