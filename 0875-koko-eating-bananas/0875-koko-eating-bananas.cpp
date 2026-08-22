class Solution { 
public: 
 
    long long func(vector<int>&piles, int i){ 
        long long totalhrs = 0; 
        
        for(int j = 0; j < piles.size(); j++){ 
            totalhrs += ceil((double)piles[j] / i); 
        } 
        
        return totalhrs; 
    } 
      
 
    int minEatingSpeed(vector<int>& piles, int h) { 
 
        int n = piles.size(); 
        int start = 1; 
        int mid; 
        int end = *max_element(piles.begin(), piles.end()); 
        int ans = end; 
 
        while(start <= end){ 
            mid = start + (end - start) / 2; 
 
            if(func(piles, mid) <= h){ 
                ans = mid; 
                end = mid - 1; 
            }
            else{ 
                start = mid + 1; 
            } 
        } 
 
        return ans; 
    } 
};