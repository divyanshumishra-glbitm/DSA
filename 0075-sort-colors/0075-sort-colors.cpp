class Solution {
public:
    void sortColors(vector<int>& nums) {

// here to get more optimised solution we will use DUTCH NATIONAL FLAG ALGORITHM

// 3 POINTERS 
int l=nums.size();
int low=0;
int mid=0;
int high=l-1;
while(mid<=high){
    if(nums[mid]==0){
        swap(nums[low],nums[mid]);
        low++;
        mid++;
    }else if(nums[mid]==2){
        swap(nums[mid],nums[high]);
        high--;
    }else{
        mid++;
    }
}
        
        
    }
};