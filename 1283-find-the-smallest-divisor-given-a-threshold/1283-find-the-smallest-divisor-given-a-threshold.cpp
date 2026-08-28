class Solution {
public:
    int sumD(vector<int>& nums, int value){
         int sum=0;
         
         for(int i=0;i<nums.size();i++){
            sum+=ceil((double)nums[i]/(double)value);
         }
         return sum;
         
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int start=1; 
        int maxIndex = max_element(nums.begin(), nums.end()) - nums.begin(); 
        int end = nums[maxIndex]; 

        int mid;
        int ans=-1;

        while(start<=end){
            mid=start+(end-start)/2;
            if(sumD(nums,mid)<=threshold){
               ans =mid;
               end=mid-1;
            }else{
                start=mid+1;
            }
        }

        return ans;
    }
};