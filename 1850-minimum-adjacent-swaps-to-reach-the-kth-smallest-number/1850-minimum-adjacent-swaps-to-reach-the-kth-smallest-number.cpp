class Solution {
public:
    int getMinSwaps(string num, int k) {
     string ludo=num;
     int timesSwap=0;
    while(k){
         int index=-1;
         
        for(int i=num.size()-2;i>=0;i--){
            if(num[i]<num[i+1]){
                index=i;
                break;
            }
        }
        if(index==-1){
            reverse(num.begin(),num.end());
            return 0;
        }

        for(int i=num.size()-1;i>=index;i--){
            if(num[i]>num[index]){
                swap(num[i],num[index]);
            
                break;
                
            }
        }

         reverse(num.begin()+index +1,num.end());
         k--;
    }
    // now num is the last 
     for(int i = 0; i < num.size(); i++) {

            // Already matching
            if(ludo[i] == num[i])
                continue;

            // Find the required character ahead
            int j = i + 1;

            while(j < num.size() && ludo[j] != num[i]) {
                j++;
            }

            // Move it left using adjacent swaps
            while(j > i) {
                swap(ludo[j], ludo[j - 1]);
                timesSwap++;
                j--;
            }
        }



    return timesSwap;

        
    }
};