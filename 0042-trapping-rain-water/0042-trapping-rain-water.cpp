class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        
        int leftmax = -1;
        int rightmax = -1;
        int crax = -1;
        int index = 0;
        int sum = 0;

        for(int i = 0; i < n; i++) {
            if(height[i] > crax) {
                crax = height[i];
                index = i;
            }
        }

        leftmax = 0;

        for(int i = 0; i < index; i++) {
            leftmax = max(leftmax, height[i]);
            sum += leftmax - height[i];
        }

        rightmax = 0;

        for(int i = n - 1; i > index; i--) {
            rightmax = max(rightmax, height[i]);
            sum += rightmax - height[i];
        }

        return sum;
    }
};