class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> heap;
        for(int i=0;i<score.size();i++){
            heap.push({score[i],i});
        }
        vector<string> ans(score.size());
        int place=1;
        while(!heap.empty()){
            int ori=heap.top().second;
            heap.pop();
            if(place==1){
                ans[ori]="Gold Medal";
            }
            else if(place==2){
                ans[ori]="Silver Medal";
            }
            else if(place==3){
                ans[ori]="Bronze Medal";
            }
            else{
                ans[ori]=to_string(place);
            }
            place++;
        }
        return ans;
    }
};