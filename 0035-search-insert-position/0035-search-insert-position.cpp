class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        // sorted array searching should be done using binary search
        int start=0,length=nums.size(),end=length-1,mid;
        while(start<=end){
            mid=end+(start-end)/2;
            if(target==nums[mid]){
                return mid;
            }else if(target<nums[mid]){
                end=mid-1;
            }else{
                start=mid+1;
            }
                
            


        }
        return start;

    }
    
};