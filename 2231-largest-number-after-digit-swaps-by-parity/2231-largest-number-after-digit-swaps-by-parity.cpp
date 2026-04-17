class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int> odd;
        priority_queue<int> even;
        string s=to_string(num);
        for(int i = 0; i < s.size(); i++){
            int digit = s[i] - '0';
            if(digit % 2 == 0){
                even.push(digit);
            } else {
                odd.push(digit);
            }
        }
        int n=0;
        for(int i = 0; i < s.size(); i++){
            int digit = s[i] - '0';
            if(digit % 2 == 0){
                n = n * 10 + even.top();
                even.pop();
            } else {
                n = n * 10 + odd.top();
                odd.pop();
            }
        }
        return n;

    }
};