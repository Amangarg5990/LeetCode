class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a="";
        for(string h:  word1){
            a+=h;
        }
        string b="";
        for(string g: word2){
            b+=g;
        }
        return (a==b);
    }
};