class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int,int> mpp;
        vector<int>arr;
        int l=nums.size();
        for(int i=0;i<l;i++){
           
            int diff=target-nums[i];
            if(mpp.find(diff)!=mpp.end()){
                arr.push_back(i);
                arr.push_back(mpp[diff]);
                return arr;
            }
             mpp[nums[i]]=i;
        }

        return arr;
        
    }
};

//orlass Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {

//         for(int i = 0; i < nums.size(); i++){

//             for(int j = i + 1; j < nums.size(); j++){

//                 if(nums[i] + nums[j] == target){

//                     return {i, j};
//                 }
//             }
//         }

//         return {};
//     }
// };