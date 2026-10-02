class Solution {
public:
    string reverseVowels(string s) {
        int n=s.size();
        string k="AEIOUaeiou";
        int left=0;
        int right=n-1;
        while(left<right){
            if(left<right&&k.find(s[left])!=string::npos&&k.find(s[right])!=string::npos){
                  swap(s[left],s[right]);
                  left++;
                  right--;
            }else if(left<right&&k.find(s[left])==string::npos){
                left++;
                
            }else if(left<right&&k.find(s[right])==string::npos){
                right--;
            }
        }
        return s;
    }
};