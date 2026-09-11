class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        map<char,int>mpp;
        string k="";
        for(int i=0;i<n;i++){
                 mpp[s[i]]++;
            
        }
        
        char ans;
       while(!mpp.empty()){
        int maxi = 0;
        for(auto it : mpp) {
        if(it.second > maxi) {
            maxi = it.second;
            ans = it.first;
        }
      }
        for(int i=0;i<maxi;i++) k+=ans;

        mpp.erase(ans);
      }
        return k;
    }
};