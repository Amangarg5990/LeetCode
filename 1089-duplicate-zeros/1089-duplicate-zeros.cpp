class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        for(int i = 0; i < n; i++) {
            if(arr[i] == 0) {
                if(ans.size() < n) ans.push_back(0);
                if(ans.size() < n) ans.push_back(0);
            } else {
                if(ans.size() < n) ans.push_back(arr[i]);
            }
        }
        arr = ans;
    }
};