class Solution { 
public: 
    vector<int> majorityElement(vector<int>& nums) { 
 
        vector<int> arr; 
        map<int,int>mpp; 
        int n=nums.size(); 
        int mm=(int)n/3 +1; 
 
        for(int i=0;i<n;i++){ 
            mpp[nums[i]]++; 
 
            if(mpp[nums[i]]==mm) 
                arr.push_back(nums[i]); 
        
        }  
        return arr; 
    } 
};