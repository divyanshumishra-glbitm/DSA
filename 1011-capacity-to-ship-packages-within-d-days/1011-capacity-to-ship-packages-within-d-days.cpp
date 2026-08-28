class Solution {
public:
    int func(vector<int>& weights, int capacity){
        int n=weights.size();
        int days=1;
        int load=0;
        for(int i=0;i<n;i++){

            if(load+weights[i]>capacity){
                days+=1;
                load=weights[i];
            }else{
                load+=weights[i];
            }
           

        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {

        
        int maxIndex = max_element(weights.begin(), weights.end()) - weights.begin(); 
        int start = weights[maxIndex];
        int end = accumulate(weights.begin(), weights.end(), 0);
        int mid;
        int ans=-1;

        while(start<=end){
     
            mid=start+(end-start)/2;
            if(func(weights,mid)<=days){
               ans=mid;
               end=mid-1;
            }else{
                start=mid+1;
            }

        }
        return ans;
        
    }
};