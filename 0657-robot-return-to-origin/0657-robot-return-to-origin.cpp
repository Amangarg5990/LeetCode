class Solution {
public:
    bool judgeCircle(string moves) {
        int u=0;
        int d=0;
        int l=0;
        int r=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U'){
                u++;
            }
            else if(moves[i]=='L'){
                l++;
            }
            else if(moves[i]=='R'){
                l--;
            }
            else{
                u--;
            }
        }
        if(u==0 && l==0){
            return true;
        }
        return false;    }
};