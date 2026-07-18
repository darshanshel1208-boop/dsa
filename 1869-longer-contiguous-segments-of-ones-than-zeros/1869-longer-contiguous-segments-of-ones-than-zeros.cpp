class Solution {
public:
    bool checkZeroOnes(string s) {
        int currentone = 0; 
        int maxone = 0; 
        int currentzero = 0; 
        int maxzero = 0; 
        
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){ 
                currentone++; 
                currentzero = 0; 
                maxone = max(maxone, currentone); 
            } 
            else { 
                currentzero++; 
                currentone = 0; 
                maxzero = max(maxzero, currentzero); 
            } 
        } 
        return maxone > maxzero; 
    } 
};
