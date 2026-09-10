class Solution {
public:
    bool isPalindrome(string s) {
     int n=s.size();
     //i can do it using recursion
     string newstr;
     for(int i=0;i<n;i++){
        if(s[i]!=' '&&(isalpha(s[i])||isalnum(s[i]))) newstr+=s[i];
     }
     transform(newstr.begin(),newstr.end(),newstr.begin(), ::tolower);
     string k=newstr;
     reverse(k.begin(),k.end());
     if(k==newstr) return true;
     

     

      return false;  
    }
};