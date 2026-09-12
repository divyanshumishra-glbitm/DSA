class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        char k;

        for (int i = 0; i < s.size(); i++) {
            int pos = t.find(s[i]);

            if (pos != string::npos) {
                t.erase(pos, 1);
            }
        }

        k = t[0];

        return k;
    }
};