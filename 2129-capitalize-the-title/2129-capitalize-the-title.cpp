class Solution {
public:
    string capitalizeTitle(string title) {
        int len=title.size();
        for(int i=0;i<len;i++){
            int fir=i;
            while(i<len && title[i]!=' '){
                title[i]=tolower(title[i]);
                i++;
            }
            if(i-fir>2){
                title[fir]=toupper(title[fir]);
            }
        }
        return title;
    }
};