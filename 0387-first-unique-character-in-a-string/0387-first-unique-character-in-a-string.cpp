class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        vector<int> visited(256,0);
        for(int i=0;i<n;i++){
            visited[s[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            if(visited[s[i]-'a']==1){
                return i;
            }
        }
        return -1;
    }
};