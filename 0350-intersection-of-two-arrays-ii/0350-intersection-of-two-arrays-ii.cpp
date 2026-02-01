class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> fre1(1001,0);
        vector<int> fre2(1001,0);
        vector<int> res;
        for(int c: nums1){
            fre1[c]++;
        }
        for(int c: nums2){
            fre2[c]++;
        }
        for(int i=0;i<1001;i++){
            int times = min(fre1[i], fre2[i]);
            while (times--) {
                res.push_back(i);
            }
        }
        return res;

    }
};