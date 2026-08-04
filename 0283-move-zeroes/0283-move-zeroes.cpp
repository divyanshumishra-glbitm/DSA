class Solution {   //there is an overwrite problem in this code how to resolve it???
public:
    void moveZeroes(vector<int>& nums) {
    //    int count=0,index=0;
    //     for(int i=0;i<nums.size();i++)
    //     {
    //         if(nums[i]==0){
    //             nums[nums.size()-count-1]=nums[i];
            
    //             count++;
    //         }else{
    //             nums[index]=nums[i];
    //             index++;
    //         }

    //     }
    //or
    int j = -1;

for(int i = 0; i < nums.size(); i++) {
    if(nums[i] == 0) {
        j = i;
        break;
    }
}

if(j == -1)
    return;

for(int i = j + 1; i < nums.size(); i++) {
    if(nums[i] != 0) {
        swap(nums[i], nums[j]);
        j++;
    }
}
    }
};