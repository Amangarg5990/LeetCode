class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> freq1(256,0);
        vector<int> freq2(256,0);
        for(int c: magazine){
            freq2[c-'a']++;
        }
        for(int h: ransomNote){
            freq2[h-'a']--;
            if(freq2[h-'a']<0){
                return false;
            }
        }
        
        return true;
        
    }
};