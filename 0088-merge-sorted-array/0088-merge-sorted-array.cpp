class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>nums;
        int f=0;
        int s=0;
        while(f<m&&s<n){
            
             if(nums1[f]<nums2[s]){
                nums.push_back(nums1[f]);
                f++;
            }else if(nums1[f]==nums2[s]){
                nums.push_back(nums1[f]);
                 f++;
                nums.push_back(nums2[s]);
                s++;
            }else{
                nums.push_back(nums2[s]);
                s++;
            }
        }
        

        while(f<m){
            nums.push_back(nums1[f]);
            f++;
        }
        while(s<n){
            nums.push_back(nums2[s]);
            s++;
        }
        nums1=nums;
        

    }
};