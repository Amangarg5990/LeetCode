class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long ans=0;
        priority_queue<int> pq;
        for(int i: gifts){
            pq.push(i);
        }
        while(k>0){
            int ma=pq.top();
            pq.pop();
            pq.push(sqrt(ma));
            k--;
        }
        while(!pq.empty()){
            int m=pq.top();
            ans+=m;
            pq.pop();
        }
        return ans;
    }
};