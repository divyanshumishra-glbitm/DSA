class Solution {
public:
    double trimMean(vector<int>& arr) {
      int l=arr.size();
        sort(arr.begin(),arr.end());
       int n=(l*5)/100;
          int v=0 ;
       long long sum=0;
       for(int i=n;i<l-n;i++){
        sum+=arr[i];
        v++ ;
       }
           
        return (double)sum/v;
        
    }
};