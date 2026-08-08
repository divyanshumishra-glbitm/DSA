class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

     vector<int> ans(nums.size(),0);
     int numspos=0;
     int numsneg=1;
     for(int i=0;i<nums.size();i++){

       if(nums[i]>0) { 
        ans[numspos]=nums[i]; 
        numspos+=2;
       }else{
        ans[numsneg]=nums[i];
        numsneg+=2;
       }
     }
     
     return ans;
        
    }
};