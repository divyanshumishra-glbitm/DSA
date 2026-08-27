class Solution { 
public: 
     
    bool possible(vector<int>& bloomDay, int m, int k, int day){ 
        int count = 0; 
        int noOFb = 0; 
        
        for(int i = 0; i < bloomDay.size(); i++){ 
            if(bloomDay[i] <= day){ 
                count++; 
            }else{ 
                noOFb += (count / k); 
                count = 0; 
            } 
        } 
        
        noOFb += (count / k); 
 
        if(noOFb >= m) return true; 
        else return false; 
    } 
     
    int minDays(vector<int>& bloomDay, int m, int k) { 
        int n = bloomDay.size(); 
        
        int minIndex = min_element(bloomDay.begin(), bloomDay.end()) - bloomDay.begin(); 
        int start = bloomDay[minIndex]; 
        
        int maxIndex = max_element(bloomDay.begin(), bloomDay.end()) - bloomDay.begin(); 
        int end = bloomDay[maxIndex]; 
        
        int mid; 
        int ans = -1; 
 
        if((long long)n < (long long)m * k) return -1; 
 
        while(start <= end){ 
            mid = start + (end - start) / 2; 
 
            if(possible(bloomDay, m, k, mid) == true){ 
                ans = mid; 
                end = mid - 1; 
            }else{ 
                start = mid + 1; 
            } 
        } 
 
        return ans; 
    } 
};