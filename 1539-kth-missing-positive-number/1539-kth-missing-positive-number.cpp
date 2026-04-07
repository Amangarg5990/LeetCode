class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_set<int> st(arr.begin(),arr.end());
        int m=0;
        int i=1;
        while(m<k){
            if(st.find(i)==st.end()){
                m++;
            }
            i++;
        }
        return i-1;


    }
};