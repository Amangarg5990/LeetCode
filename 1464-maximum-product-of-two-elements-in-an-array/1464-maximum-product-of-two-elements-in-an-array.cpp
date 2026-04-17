class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq;
        for(int n: nums){
            pq.push(n);
        }
        int a1=pq.top();
        pq.pop();
        int a2=pq.top();
        return (a1-1)*(a2-1);
    }
};