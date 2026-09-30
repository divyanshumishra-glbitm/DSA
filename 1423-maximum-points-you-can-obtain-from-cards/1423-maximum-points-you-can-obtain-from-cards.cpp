class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int n=cardPoints.size();
        int l=0;
        int r=n-k-1;
        int sum=0;
        int sum1=0;
        int minind;
        int maxind;
        for(int i=l;i<n;i++){
            if(i<n-k) sum+=cardPoints[i];

            sum1+=cardPoints[i];
        }
        int mini=sum;
       while(r<n){

        if(mini>=sum){
            

            int minind=l;
            int maxind=r;

            mini=sum;
          
        }
        
        if(l<=r)  sum-=cardPoints[l];
        l++;

        r++;

        if(r<n) sum+=cardPoints[r];



        
       }
       return sum1-mini;
    }
};