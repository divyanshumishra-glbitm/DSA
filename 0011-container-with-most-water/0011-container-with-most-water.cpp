class Solution {
public:
    int maxArea(vector<int>& height) {
      
        int n=height.size();
        int start=0;
        int end=n-1;
        int maxarea= min(height[start],height[end])*(end-start);
        while(start<end){
            
            if(height[start]<height[end]) start++;
            else end--;

            int area = min(height[start],height[end])*(end-start);
            maxarea=max(maxarea,area);
            
        }
        return maxarea;
        
    }
};




// class Solution {
// public:
//     int maxArea(vector<int>& height) {

//         //BRUTE FORCE SOLUTION
//         int maxarea=0;
//         int n=height.size();
//        for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//            int area=min(height[i],height[j])*(j-i);
//            maxarea=max(maxarea,area);
//         }
//        }
//        return maxarea;
        
//     }
// };