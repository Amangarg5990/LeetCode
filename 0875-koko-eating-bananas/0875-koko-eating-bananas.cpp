class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maximum_elements=*max_element(piles.begin(),piles.end());
        int start=1;
        int end=maximum_elements;
        int result=maximum_elements;
        while(start<=end){
            int mid=(start+end)/2;
            long long l=0;
            for(int i=0;i<piles.size();i++){
                double o=ceil(piles[i]/(double)mid);
                l+=o;
            }

            if(l<=h){
                result=mid;
                end=mid-1;

            }
            else if(l<h){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return result;
    }
};