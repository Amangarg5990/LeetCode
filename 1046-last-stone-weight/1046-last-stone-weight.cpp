class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int k: stones){
            pq.push(k);
        }
        while(pq.size()>1){
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            if(a!=b){
                pq.push(a-b);
            }
            else{
                pq.push(0);
            }
        }
        return pq.top();
    }
};