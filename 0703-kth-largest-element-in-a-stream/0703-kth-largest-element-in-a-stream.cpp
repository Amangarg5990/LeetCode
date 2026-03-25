// class KthLargest {
// public:
//     priority_queue<int>pq;
//     int m;
//     KthLargest(int k, vector<int>& nums) {
//         for(int i: nums){
//             pq.push(i);
//         }
//         m=k;
//     }
//     int add(int val) {
//         pq.push(val);
//          // want to pop element till k times pop 
//          // then return pq.top();
//          //then again pushing pop elements
//          //write a code of mine logic
//         vector<int> temp;
//         // pop k-1 elements
//         for(int i = 0; i < m - 1; i++){
//             if(pq.empty()) break;
//             temp.push_back(pq.top());
//             pq.pop();
//         }
//         // kth largest
//         int ans = pq.top();
//         // restore heap
//         for(int x : temp){
//             pq.push(x);
//         }
//         return ans;
//     }
// };
class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int k;

    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for(int x : nums){
            pq.push(x);
            if(pq.size() > k){
                pq.pop();
            }
        }
    }

    int add(int val) {
        pq.push(val);
        if(pq.size() > k){
            pq.pop();
        }
        return pq.top();
    }
};
/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */