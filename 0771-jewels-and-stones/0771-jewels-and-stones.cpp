class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> mpp;
        for(char c: stones){
            mpp[c]++;
        }
        int co=0;
        for(char c: jewels){
            co+=mpp[c];
        }
        return co;
    }
};