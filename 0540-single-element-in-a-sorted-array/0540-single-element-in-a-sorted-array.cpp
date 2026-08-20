class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int l=nums.size();

        //eliminating the edge cases for writting the clean code
        
        if(l==1)  return nums[0];

        if(nums[0]!=nums[1]) return nums[0];

        if(nums[l-1]!=nums[l-2]) return nums[l-1];

        int start=1;
        int end=l-2;
        int mid;

        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid-1]!=nums[mid] && nums[mid]!=nums[mid+1]) return nums[mid];

            if(((mid%2==1)&&(nums[mid-1]==nums[mid]))||((mid%2==0)&&(nums[mid+1]==nums[mid]))){
                //element is on the right half we have to eliminate the left half
                start=mid+1;

            }else{
                end=mid-1;
            }
        }

      
      return -1;
        
    }
};