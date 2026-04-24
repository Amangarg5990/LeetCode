class Solution {
public:
    bool isCircularSentence(string sentence) {
        int wor=0;
        for(int i=0;i<sentence.size();i++){
            if(sentence[i]==' '){
                wor++;
                if(sentence[i-1]!=sentence[i+1]){
                    return false;
                }
            }
        }
        // if(wor==0){
            if(sentence[0]!=sentence[sentence.size()-1]){
                return false;
            }
        return true;
    }
};