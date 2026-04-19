class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()){
            return false;
        }
        string ne=s+s;
        return ne.find(goal) != string::npos;
    }
};