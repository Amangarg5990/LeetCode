class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        vector<int> freq(51,0);
        vector<int> ans;
        for(int i=0, j=0;i<nums.size();i++){
            if(nums[i]<0) freq[abs(nums[i])]++;
            if(i-j+1>=k){
                int cnt=0;
                for(int l=50;l>=1;l--){
                    cnt+=freq[l];
                    if(cnt>=x){
                        ans.push_back(-l);
                        break;
                    }
                }
                if(cnt<x) ans.push_back(0);
                if(nums[j]<0) freq[abs(nums[j])]--;
                j++;
            }
        }
        return ans;
    }
};