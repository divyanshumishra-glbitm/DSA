class Solution {
public:
    int firstUniqChar(string s) {

        int l=s.size();
        int index=-1;
        map<char,int>mpp;
        for(int i=0;i<l;i++){
            mpp[s[i]]++;


        }
        for(int i=0;i<l;i++){
            if(mpp[s[i]]==1){

            index=i;
               break;
            }
        }
        return index;
    }
};