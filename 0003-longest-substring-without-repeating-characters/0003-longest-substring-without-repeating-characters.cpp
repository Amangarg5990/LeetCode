class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int j=0;
        vector<int> freq(256,0);
        int n=s.size();
        int maxlen=0;
        for(int i=0;i<n;i++){
            freq[s[i]]++;
                while(freq[s[i]]>1){
                    freq[s[j]]--;
                    j++;
                }
            maxlen=max(maxlen,i-j+1);
        }
        return maxlen;
    }
};