class Solution { 
public: 
    vector<int> majorityElement(vector<int>& nums) { 
        vector<int> ans; 
 
        int l = nums.size(); 
        int x = l / 3; 
         
        map<int, int> mpp; 
 
        // Store frequency of every element
        for(int i = 0; i < l; i++){ 
            mpp[nums[i]]++; 
        } 
        
        // Check all keys and their frequencies
        for(auto it : mpp) {  
             
            if(it.second > x) {  
                ans.push_back(it.first);  
            } 
        } 
 
        return ans; 
    } 
};