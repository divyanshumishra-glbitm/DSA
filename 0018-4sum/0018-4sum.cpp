class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        //the optimal approach would be two pointer only

      int n=nums.size();
      sort(nums.begin(),nums.end());
      vector<vector<int>> ans;

      for(int i=0;i<n-3;i++){
        if(i>0&&nums[i-1]==nums[i]) continue;
        for(int j=i+1;j<n-2;j++){
            if(j>i+1&&nums[j-1]==nums[j]) continue;

            int k=j+1;
            int l=n-1;

            while(k<l){
                long long result=(long long)nums[i]+nums[j]+nums[k]+nums[l];
                if(result<target){
                    k++;
                }else if(result>target){
                    l--;
                }else{
                    vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while(k<l&&nums[k-1]==nums[k]){
                        k++;
                    }
                    while(k<l&&nums[l+1]==nums[l]){
                        l--;
                    }
                }
            }

        }
      }


       return ans;
    }
};