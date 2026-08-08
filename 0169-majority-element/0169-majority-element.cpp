class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int count=0;
        int maj;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                count=1;
                maj=nums[i];
            }else if(nums[i]==maj){
                count++;
            }else{
                count--;
            }
        }

        int count1=0;
        for(int i=0;i<nums.size();i++){
            if(maj==nums[i]) count1++;
        }
        if(count1>(nums.size()/2)) return maj;


        return -1;
    }
};


// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         map<int, int> mpp;

//         for(int i = 0; i < nums.size(); i++) {
//             mpp[nums[i]]++;
//         }

//         for(auto it : mpp) {
//             if(it.second > nums.size() / 2) {
//                 return it.first;
//             }
//         }

//         return -1;
//     }
// };