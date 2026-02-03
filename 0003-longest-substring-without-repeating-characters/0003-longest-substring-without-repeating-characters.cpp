class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last(256,-1);
        int maxlen=0;
        int left=0;
        int n=s.size();
        for(int right=0;right<n;right++){
            if(last[s[right]]>=left){
                left = last[s[right]] + 1;
            }
            last[s[right]]=right;
            int len=right-left+1;
            maxlen=max(maxlen,len);
        }
        return maxlen;
    }
};