class Solution { 
public: 
    vector<int> leftRightDifference(vector<int>& nums) { 

        int l = nums.size(); 
        vector<int> ls(l); 
        vector<int> rs(l); 
        vector<int> ans(l); 

        int lsum = 0; 
        ls[0] = lsum; 

        int rsum = 0; 
        rs[l - 1] = rsum; 

        for(int i = 0; i < l - 1; i++){ 
          
            lsum += nums[i]; 
            ls[i + 1] = lsum;   // Corrected

            rsum += nums[l - 1 - i]; 
            rs[l - 2 - i] = rsum; 
        } 

        for(int i = 0; i < l; i++){ 
            ans[i] = abs(ls[i] - rs[i]); 
        } 

        return ans; 
    } 
};