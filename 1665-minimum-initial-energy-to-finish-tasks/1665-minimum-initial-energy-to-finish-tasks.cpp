class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        sort(tasks.begin(), tasks.end(), [](const vector<int> &a,const vector<int> &b) {
            int k=a[1]-a[0];
            int m=b[1]-b[0];
            return k>m;
        });
        int energy=0;
        int rem=0;
        for(int i=0;i<tasks.size();i++){
            int actual = tasks[i][0];
            int minimum = tasks[i][1];

            if (rem < minimum) {
                energy += minimum - rem;
                rem = minimum;
            }

            rem -= actual;
        }
        return energy;
    }
};