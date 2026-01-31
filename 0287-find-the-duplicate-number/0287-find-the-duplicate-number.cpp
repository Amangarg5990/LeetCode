class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    //     int m=0;
        int n=nums.size();
    //     sort(nums.begin(),nums.end());
    //     for(int i=0;i<n-1;i++){
    //         if(nums[i]==nums[i+1]){
    //             m=nums[i];
    //         }
    //     }
    //     return m;
        vector<int> c(*max_element(nums.begin(),nums.end())+1,0);
        for(int i: nums){
            c[i]++;
        }
        for(int i=0;i<c.size();i++){
            if(c[i]>1){
                return i;
            }
        }
        return -1;
    }
};