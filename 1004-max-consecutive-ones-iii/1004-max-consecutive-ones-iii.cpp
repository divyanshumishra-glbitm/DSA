class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
      //better 

        int n=nums.size();
        int l=0;
        int r=0;
        int count0=0;
        int maxlen=0;

        while(r<n){

            if(nums[r]==0) count0++;

            while(count0>k){
                if(nums[l]==0){
                    count0--;
                    
                }
                l++;
            }

            if(count0<=k){
            int length=r-l+1;
            maxlen=max(maxlen,length);
            }
            r++;
        }

        return maxlen;   
    }
};