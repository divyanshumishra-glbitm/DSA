class Solution {  
public:  
    string reverseWords(string s) {  
 
        int n = s.length();  
        string k;  
        string m;  
 
        for(int i = n - 1; i >= 0; i--) {  
            if(s[i] != ' ') {  
                k += s[i];  
            }  
            else {  
                if(!k.empty()) {  
                    reverse(k.begin(), k.end());  
                    if(!m.empty())  
                        m += " ";  
                    m += k;  
                    k = "";  
                }  
            }  
        }  
 
        if(!k.empty()) {  
            reverse(k.begin(), k.end());  
            if(!m.empty())  
                m += " ";  
            m += k;  
        }  
 
        return m;  
    }  
};