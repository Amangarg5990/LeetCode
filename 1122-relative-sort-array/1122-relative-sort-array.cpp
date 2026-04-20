class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> mpp;
        for(int i: arr1){
            mpp[i]++;
        }
        vector<int> ans;
        for(int i=0;i<arr2.size();i++){
            int m=mpp[arr2[i]];
            while(m>0){
                ans.push_back(arr2[i]);
                m--;
            }
            mpp[arr2[i]]=0;
        }
        for(auto it: mpp){
            if(it.second>0){
                int m=it.second;
                while(m>0){
                    ans.push_back(it.first);
                    m--;
                }
                mpp[it.first]=0;
            }
        }
        return ans;
    }

};