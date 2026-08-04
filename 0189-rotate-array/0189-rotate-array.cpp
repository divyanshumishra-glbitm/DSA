class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        // int n = nums.size();
        // vector<int> temp(n);//created temporary array with same size

        // for(int i = 0; i < n; i++)
        // {
        //     temp[(i + k) % n] = nums[i];
        // }

        // nums = temp; //now temporary array is assigned to nums array

        //or
        k=k%nums.size();
        reverse(nums.end()-k,nums.end());
        reverse(nums.begin(),nums.end()-k);
        reverse(nums.begin(),nums.end());
    }
};