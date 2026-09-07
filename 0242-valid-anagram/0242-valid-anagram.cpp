class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())  return false;

        for(int i=0;i<s.length();i++){
            if(t.find(s[i])!=string::npos){
                int k=t.find(s[i]);//index of s[i] in t
                  t.erase(k, 1);

            }
        }
        if(t=="") return true;

        return false;
    }
};