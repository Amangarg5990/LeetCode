class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        int n=asteroids.size();
        for(int curr: asteroids){
            bool des=false;
            while(!st.empty() && st.top()>0 && curr<0){
                int topVal=st.top();
                if(abs(topVal)<abs(curr)){
                    st.pop();
                }
                else if(abs(topVal)==abs(curr)){
                    st.pop();
                    des=true;
                    break;
                }
                else{
                    des=true;
                    break;
                }
               
            }
            if(!des){
                st.push(curr);
            }
        }
        vector<int>result(st.size());
        for(int i=st.size()-1;i>=0;i--){
            result[i]=st.top();
            st.pop();
        }
        return result;
    }
};