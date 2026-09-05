class Solution { 
public: 
    bool rotateString(string s, string goal) { 
 
        if(s.length() != goal.length()) {
            return false;
        }

        string newstr = s + s; 
 
        if(newstr.find(goal) == string::npos) {
            return false;
        }

        return true; 
    } 
};