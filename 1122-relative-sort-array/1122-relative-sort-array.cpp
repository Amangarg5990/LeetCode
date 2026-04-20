class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        // map<int,int> mpp;
        // for(int i: arr1){
        //     mpp[i]++;
        // }
        // vector<int> ans;
        // for(int i=0;i<arr2.size();i++){
        //     int m=mpp[arr2[i]];
        //     while(m>0){
        //         ans.push_back(arr2[i]);
        //         m--;
        //     }
        //     mpp[arr2[i]]=0;
        // }
        // for(auto it: mpp){
        //     if(it.second>0){
        //         int m=it.second;
        //         while(m>0){
        //             ans.push_back(it.first);
        //             m--;
        //         }
        //         mpp[it.first]=0;
        //     }
        // }
        // return ans;
        vector<int> count(1001, 0);
        for(int x : arr1) {
            count[x]++;
        }
        vector<int> ans;
        for(int x : arr2) {
            while(count[x] > 0) {
                ans.push_back(x);
                count[x]--;
            }
        }
        for(int i = 0; i < 1001; i++) {
            while(count[i] > 0) {
                ans.push_back(i);
                count[i]--;
            }
        }
        return ans;
    }

};