class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
      
      vector <int> arr;
      vector <int> korona(queries.size());
      
      for(int i=0;i<nums.size();i++){
       if(nums[i]==x){
         arr.push_back(i);
       }
      } 
      int l=x;

      
     for(int i=0;i<queries.size();i++){

        if(queries[i]>arr.size()){
            korona[i]=-1;
        }else{
            korona[i]=arr[queries[i]-1];
        }
         
        
     }





     return korona;

    }
};