class Solution {
public:
    bool helper(int start,int end, string &s){
        if(start>=end){
            return true;
        }
            if(!isalnum(s[start])){
                return helper(start+1,end,s);
            }
            if(!isalnum(s[end])){
                return helper(start,end-1,s);
            }
            if(tolower(s[start])!=tolower(s[end])){
                return false;
            }
                return helper(start+1,end-1,s);
    }
    bool isPalindrome(string s) {
        int start=0;
        int end=s.size()-1;
        // while(start<=end){
        //     if(!isalnum(s[start])){
        //         start++;
        //         continue;
        //     }
        //     if(!isalnum(s[end])){
        //         end--;
        //         continue;
        //     }
        //     if(tolower(s[start])!=tolower(s[end])){
        //         return false;
        //     }
        //     else{
        //         start++;
        //         end--;
        //     }
        // }
        // return true;
        return helper(start,end,s);
    }
};