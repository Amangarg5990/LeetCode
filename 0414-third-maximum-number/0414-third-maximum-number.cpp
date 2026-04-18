class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end()); // remove duplicates
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int n : st){
            pq.push(n);
            if(pq.size() > 3){
                pq.pop();
            }
        }
        if(pq.size() < 3){
            return *max_element(st.begin(), st.end());
        }
        return pq.top();
    }
};