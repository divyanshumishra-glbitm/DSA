class Solution {
public:
    int pivotIndex(vector<int>& nums) {int l=nums.size();
        int first=0;
        int sum1=0;
        int sum2=0;
        int middle=0;
        for(int i=0;i<l;i++){
            sum2=sum2+nums[i];
        }
        sum2=sum2-nums[0];
        while(middle<l){
            if(sum1==sum2){
                return middle;
            }else{
                sum1=sum1+nums[first];
                first++;
                middle++;
                if(middle<l){
                sum2=sum2-nums[middle];
                }
            }

            }

            return -1;
        
    }
};