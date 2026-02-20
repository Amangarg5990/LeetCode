class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq_max;
        for(int i: nums){
            pq_max.push(i);
        }
        for(int i=1;i<k;i++){
            pq_max.pop();

        }
        return pq_max.top();
    }

};