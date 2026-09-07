class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length())
            return false;

        map<char, char> mpp;
        map<char, char> rev;

        for (int i = 0; i < s.length(); i++) {
            if (mpp.find(s[i]) != mpp.end()) {
                if (mpp[s[i]] != t[i])
                    return false;
            } else {
                if (rev.find(t[i]) != rev.end())
                    return false;

                mpp[s[i]] = t[i];
                rev[t[i]] = s[i];
            }
        }

        return true;
    }
};